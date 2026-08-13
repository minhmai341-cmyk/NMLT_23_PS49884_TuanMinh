#include <stdio.h>

void menu();

int main()
{
    int chon;

    do
    {
        menu();

        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);

        switch(chon)
        {
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