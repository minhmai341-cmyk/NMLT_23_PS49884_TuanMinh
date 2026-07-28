#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("+--------------------------------------------------------------------+\n");
        printf("|                      MENU CHUONG TRINH                             |\n");
        printf("+--------------------------------------------------------------------+\n");
        printf("| 0.  Thoat chuong trinh.                                            |\n");
        printf("| 1.  Kiem tra so nguyen                                             |\n");
        printf("| 2.  Tim uoc so chung va boi so chung cua 2 so                      |\n");
        printf("| 3.  Chuong trinh tinh tien cho quan Karaoke                        |\n");
        printf("| 4.  Tinh tien dien                                                 |\n");
        printf("| 6.  Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop     |\n");
        printf("| 8.  Sap xep thong tin sinh vien                                    |\n");
        printf("| 10. Xay dung chuong trinh tinh toan phan so                        |\n");
        printf("+--------------------------------------------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 10): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Ban da chon chuc nang 0: Thoat chuong trinh.\n");
            break;
        case 1:
            printf("Ban da chon chuc nang 1: Kiem tra so nguyen.\n");
            break;
        case 2:
            printf("Ban da chon chuc nang 2: Tim uoc so chung va boi so chung cua 2 so.\n");
            break;
        case 3:
            printf("Ban da chon chuc nang 3: Chuong trinh tinh tien cho quan Karaoke.\n");
            break;
        case 4:
            printf("Ban da chon chuc nang 4: Tinh tien dien.\n");
            break;
        case 6:
            printf("Ban da chon chuc nang 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop.\n");
            break;
        case 8:
            printf("Ban da chon chuc nang 8: Sap xep thong tin sinh vien.\n");
            break;
        case 10:
            printf("Ban da chon chuc nang 10: Xay dung chuong trinh tinh toan phan so.\n");
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 10\n");
            break;
        }
    } while (chon != 0);

    return 0;
}