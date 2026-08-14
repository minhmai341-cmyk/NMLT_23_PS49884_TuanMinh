#include <stdio.h>
#include <string.h>
#include <ctype.h>

void menu();
void chucNang1();
void chucNang2();

void demNguyenAmPhuAm();
void kiemTraDangNhap();
int main()
{
    int chon;

    do
    {
        menu();

        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar();

        switch(chon)
        {
        case 1:
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;    
        case 5:
            printf("Tam biet!\n");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 5!\n");
            break;
        }

    } while(chon != 5);

    return 0;
}

void menu()
{
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 7              |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Dem Nguyen am va Phu am trong chuoi            |\n");
    printf("| 2. Dang nhap he thong (User & Password)           |\n");
    printf("| 3. Sap xep danh sach Chuoi theo Alphabet          |\n");
    printf("| 4. Chuyen doi so Thap phan sang Nhi phan (Chuoi)  |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}
void chucNang1()
{
    char s[10];
    int demNA = 0, demPA = 0;
 
    printf("\nNhap chuoi: ");
    fgets(s, sizeof(s), stdin);
 
    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = tolower(s[i]);
 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            demNA++;
        }
        else
        {
            demPA++;
        }
    }
 
    printf("So luong nguyen am: %d\n", demNA);
    printf("So luong phu am: %d\n", demPA);
}
void chucNang2()
{
    char userSys[] = "admin";
    char passSys[] = "123456";
    char user[50], pass[50];
 
    printf("\nNhap Username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';
 
    printf("Nhap Password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';
 
    if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0)
    {
        printf("\n>> Dang nhap thanh cong!\n");
    }
    else
    {
        printf("\n>> Username hoac Password khong chinh xac!\n");
    }
}