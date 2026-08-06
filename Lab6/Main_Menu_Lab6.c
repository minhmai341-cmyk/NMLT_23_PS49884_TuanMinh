#include <stdio.h>
void menu();
int main()
{
    int chon;
    do
    {
        menu();
        printf(">> Xin moi chon chuc nang (1-6): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 6:
            printf("Tam biet!");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 6\n");
            break;
        }
    } while (chon != 6);

    return 0;
}

void menu()
{
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 6               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tinh trung binh tong so chia het cho 3 va 5    |\n");
    printf("| 2. Tim gia tri lon nhat va nho nhat trong mang    |\n");
    printf("| 3. Sap xep mang theo thu tu giam dan              |\n");
    printf("| 4. Ma tran binh phuong (mang 2 chieu)             |\n");
    printf("| 5. Loc va xuat vi tri cac so le trong ma tran     |\n");
    printf("| 6. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}