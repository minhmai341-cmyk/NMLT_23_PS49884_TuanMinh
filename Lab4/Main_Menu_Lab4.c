#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|               MENU CHUONG TRINH LAB 4             |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");

        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Chuc nang 1 dang duoc cap nhat.\n");
                break;

            case 2:
                printf("Chuc nang 2 dang duoc cap nhat.\n");
                break;

            case 3:
                printf("Chuc nang 3 dang duoc cap nhat.\n");
                break;

            case 4:
                printf("Da thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while(choice != 4);

    return 0;
}