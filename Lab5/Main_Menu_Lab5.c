#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
int soLonNhat(int a, int b, int c);
bool kiemTraNamNhuan(int nam);
void swap(int *a, int *b);
int main()
{
    int chon;
    do
    {
        menu();
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;
        case 3:
            chucNang3();
            break;
        case 5:
            printf("Tam biet!");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 5\n");
            break;
        }
    } while (chon != 5);

    return 0;
}
void menu()
{
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 5               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tim gia tri lon nhat trong 3 so                |\n");
    printf("| 2. Kiem tra Nam nhuan                             |\n");
    printf("| 3. Hoan vi 2 so (Su dung Con tro)                 |\n");
    printf("| 4. Kiem tra & Phan loai Tam giac                  |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}
void chucNang1()
{
    int a, b, c;
    printf("Nhap a,b,c: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("So lon nhat: %d\n", soLonNhat(a, b, c));
}

int soLonNhat(int a, int b, int c)
{
    int lonNhat = a;
    if (lonNhat < b)
    {
        lonNhat = b;
    }
    if (lonNhat < c)
    {
        lonNhat = c;
    }
    return lonNhat;
}
void chucNang2()
{
    int nam;
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if (kiemTraNamNhuan(nam))
    {
        printf("Nam %d la nam nhuan\n", nam);
    }
    else
    {
        printf("Nam %d khong phai la nam nhuan\n", nam);
    }
}
bool kiemTraNamNhuan(int nam)
{
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
        return true;
    else
        return false;
}
void chucNang3()
{
    int x, y;
    printf("Nhap hai so x, y: ");
    scanf("%d%d", &x, &y);
    printf("Truoc khi hoan vi x = %d. y = %d\n", x, y);
    swap(&x, &y);
    printf("Sau khi hoan vi x = %d. y = %d\n", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
