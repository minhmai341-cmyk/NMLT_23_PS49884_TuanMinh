#include <stdio.h>
#include <math.h>

int main()
{
    int chon;
    float diem;
    float a, b, c, delta, x1, x2, x;
    int kwh;
    double tien = 0;
    do
    {
        printf("+-------------------------------+\n");
        printf("| MENU CHƯƠNG TRÌNH LAB 3.   |\n");
        printf("+-------------------------------+\n");
        printf("| 0. Thoat chuong trinh.        |\n");
        printf("| 1. Tinh hoc luc sinh vien     |\n");
        printf("| 2. Giai phuong trinh bac 2    |\n");
        printf("| 3. Tinh tien dien             |\n");
        printf("+-------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 3): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Ban da chon chuc nang 0: Thoat chuong trinh.\n");
            break;
        case 1:
            printf("Ban da chon chuc nang 1: Tinh hoc luc sinh vien.\n");
            printf("\nNhap diem (0 - 10): ");
            scanf("%f", &diem);

            if (diem < 0 || diem > 10) {
                printf("Diem so nhap vao khong hop le!\n");
            } else if (diem >= 9) {
                printf("Hoc luc: Xuat sac\n");
            } else if (diem >= 8) {
                printf("Hoc luc: Gioi\n");
            } else if (diem >= 6.5) {
                printf("Hoc luc: Kha\n");
            } else if (diem >= 5) {
                printf("Hoc luc: Trung binh\n");
            } else if (diem >= 3.5) {
                printf("Hoc luc: Yeu\n");
            } else {
                printf("Hoc luc: Kem\n");
            }
            break;
        case 2:
            printf("Ban da chon chuc nang 2: Giai phuong trinh bac 2.\n");
            printf("\nNhap a, b, c: ");
            scanf("%f %f %f", &a, &b, &c);

            if (a == 0) {
                if (b == 0) {
                    if (c == 0)
                        printf("Phuong trinh vo so nghiem.\n");
                    else
                        printf("Phuong trinh vo nghiem.\n");
                } else {
                    x = -c / b;
                    printf("Phuong trinh co nghiem x = %.2f\n", x);
                }
            } else {
                delta = b * b - 4 * a * c;

                if (delta < 0) {
                    printf("Phuong trinh vo nghiem.\n");
                } else if (delta == 0) {
                    x = -b / (2 * a);
                    printf("Phuong trinh co nghiem kep x = %.2f\n", x);
                } else {
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Phuong trinh co 2 nghiem:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }
            break;
        case 3:
            printf("Ban da chon chuc nang 3: Tinh tien dien.\n");
            printf("\nNhap so kWh tieu thu: ");
            scanf("%d", &kwh);

            if (kwh < 0) {
                printf("So kWh khong hop le!\n");
            } else if (kwh <= 50) {
                tien = kwh * 1678;
            } else if (kwh <= 100) {
                tien = 50 * 1678 + (kwh - 50) * 1734;
            } else if (kwh <= 200) {
                tien = 50 * 1678
                     + 50 * 1734
                     + (kwh - 100) * 2014;
            } else if (kwh <= 300) {
                tien = 50 * 1678
                     + 50 * 1734
                     + 100 * 2014
                     + (kwh - 200) * 2536;
            } else if (kwh <= 400) {
                tien = 50 * 1678
                     + 50 * 1734
                     + 100 * 2014
                     + 100 * 2536
                     + (kwh - 300) * 2834;
            } else {
                tien = 50 * 1678
                     + 50 * 1734
                     + 100 * 2014
                     + 100 * 2536
                     + 100 * 2834
                     + (kwh - 400) * 2927;
            }

            if (kwh >= 0)
                printf("Tong tien dien: %.0lf dong\n", tien);
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 3\n");
            break;
        }
    } while (chon != 0);

    return 0;
}