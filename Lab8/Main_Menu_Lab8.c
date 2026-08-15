#include <stdio.h>
#include <string.h>
struct SinhVien
{
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};
struct SinhVien mangSV[100];
int n = 0;
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void nhapXuatSinhVien(struct SinhVien mangSV[], int *n);
void sapXepSinhVien(struct SinhVien mangSV[], int n);
void timKiemSinhVien(struct SinhVien mangSV[], int n);
void xuatHocBong(struct SinhVien mangSV[], int n);
int main()
{
    int chon;
    do
    {
        menu();

        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar();

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
        case 4:
            chucNang4();
            break;
        case 5:
            printf("Tam biet!\n");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 5!\n");
            break;
        }

    } while (chon != 5);

    return 0;
}
void menu()
{
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 8               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Nhap va Xuat danh sach sinh vien               |\n");
    printf("| 2. Sap xep sinh vien theo diem TB tang dan        |\n");
    printf("| 3. Tim kiem sinh vien theo Ma so sinh vien (MSSV) |\n");
    printf("| 4. Xuat danh sach sinh vien dat Hoc bong (>= 8.0) |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}
void chucNang1()
{
    nhapXuatSinhVien(mangSV, &n);
}

void nhapXuatSinhVien(struct SinhVien mangSV[], int *n)
{
    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++)
    {
        printf("\n--- Sinh vien thu %d ---\n", i + 1);
        printf("Ma so sinh vien: ");
        scanf(" %[^\n]", mangSV[i].mssv);
        printf("Ho va ten: ");
        scanf(" %[^\n]", mangSV[i].tenSV);
        printf("Nganh hoc: ");
        scanf(" %[^\n]", mangSV[i].nganhHoc);
        printf("Diem trung binh: ");
        scanf("%f", &mangSV[i].diemTB);
    }

    printf("\n%-10s %-20s %-20s %-8s\n", "MSSV", "Ho va Ten", "Nganh Hoc", "Diem TB");
    for (int i = 0; i < *n; i++)
    {
        printf("%-10s %-20s %-20s %-8.2f\n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}
void chucNang2()
{
    sapXepSinhVien(mangSV, n);
}
 
void sapXepSinhVien(struct SinhVien mangSV[], int n)
{
    struct SinhVien temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mangSV[i].diemTB > mangSV[j].diemTB)
            {
                temp = mangSV[i];
                mangSV[i] = mangSV[j];
                mangSV[j] = temp;
            }
        }
    }
 
    printf("\n%-10s %-20s %-20s %-8s\n", "MSSV", "Ho va Ten", "Nganh Hoc", "Diem TB");
    for (int i = 0; i < n; i++)
    {
        printf("%-10s %-20s %-20s %-8.2f\n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}
void chucNang3()
{
    timKiemSinhVien(mangSV, n);
}
 
void timKiemSinhVien(struct SinhVien mangSV[], int n)
{
    char mssvTim[50];
    int found = 0;
 
    printf("Nhap MSSV can tim: ");
    scanf(" %[^\n]", mssvTim);
 
    for (int i = 0; i < n; i++)
    {
        if (strcmp(mangSV[i].mssv, mssvTim) == 0)
        {
            printf("MSSV: %s\t Ho ten: %s\t Nganh: %s\t Diem TB: %.2f\n",
                   mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
            found = 1;
            break;
        }
    }
 
    if (found == 0)
    {
        printf("Khong tim thay sinh vien co MSSV nay!\n");
    }
}
void chucNang4()
{
    xuatHocBong(mangSV, n);
}
 
void xuatHocBong(struct SinhVien mangSV[], int n)
{
    int demHocBong = 0;
    printf("\nDanh sach sinh vien dat hoc bong:\n");
    for (int i = 0; i < n; i++)
    {
        if (mangSV[i].diemTB >= 8.0)
        {
            printf("MSSV: %s\t Ho ten: %s\t Nganh: %s\t Diem TB: %.2f\n",
                   mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
            demHocBong++;
        }
    }
 
    if (demHocBong == 0)
    {
        printf("Khong co sinh vien nao dat hoc bong!\n");
    }
}