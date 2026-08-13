#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct giaDien
{
    int mucTieuThu;
    float gia;
};
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
void chucNang6();
bool kiemTraSoNguyen(float so);
bool kiemTraSNT(int so);
bool kiemTraSCP(int so);
int timUCLN(int a, int b);
int timBCNN(int a, int b);
int main()
{
    int chon;
    do
    {
        menu();
        printf("Ban hay chon chuc nang (0 - 10): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Tam biet!\n");
            break;
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
            chucNang5();
            break;
        case 6:
            chucNang6();
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 10\n");
            break;
        }
    } while (chon != 0);

    return 0;
}
void menu()
{
    printf("+--------------------------------------------------------------------+\n");
    printf("|                      MENU CHUONG TRINH                             |\n");
    printf("+--------------------------------------------------------------------+\n");
    printf("| 0.  Thoat chuong trinh.                                            |\n");
    printf("| 1.  Kiem tra so nguyen                                             |\n");
    printf("| 2.  Tim uoc so chung va boi so chung cua 2 so                      |\n");
    printf("| 3.  Chuong trinh tinh tien cho quan Karaoke                        |\n");
    printf("| 4.  Tinh tien dien                                                 |\n");
    printf("| 5.  Chuc nang doi tien                                             |\n");
    printf("| 6.  Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop     |\n");
    printf("| 7.  Xay dung chuong trinh vay tien mua xe                          |\n");
    printf("| 8.  Sap xep thong tin sinh vien                                    |\n");
    printf("| 9.  Xay dung game FPOLY-LOTT (2/15)                                |\n");
    printf("| 10. Xay dung chuong trinh tinh toan phan so                        |\n");
    printf("+--------------------------------------------------------------------+\n");
}
void chucNang1()
{
    float so;
    getchar();
    printf("Nhap so: ");
    scanf("%f", &so);
    if (kiemTraSoNguyen(so))
    {
        printf("So %.2f la so nguyen. \n", so);
        if (kiemTraSNT((int)so))
        {
            printf("So %.2f la so nguyen to. \n", so);
        }
        else
        {
            printf("So %.2f khong phai la so nguyen to. \n", so);
        }
        printf("%s\n", kiemTraSCP((int)so) ? "la so chinh phuong" : "khong phai la so chinh phuong");
    }
    else
    {
        printf("So %.2f khong phai la so nguyen .\n", so);
    }
}
bool kiemTraSoNguyen(float so)
{
    if ((int)so == so)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool kiemTraSNT(int so)
{
    if (so < 2)
        return false;
    if (so == 2)
        return true;
    for (int i = 2; i <= so / 2; i++)
    {
        if (so % i == 0)
            return false;
    }
    return true;
}
bool kiemTraSCP(int so)
{
    if (kiemTraSoNguyen(sqrt(so)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int timUCLN(int a, int b)
{
    while (b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}
int timBCNN(int a, int b)
{
    return (a * b) / timUCLN(a, b);
}
void chucNang2()
{
    int a, b;
    printf("Nhap a,b: ");
    scanf("%d %d", &a, &b);
    int ucln = timUCLN(a, b);
    int bcnn = timBCNN(a, b);
    printf("Uoc chung lon nhat cua %d va %d la %d\n", a, b, ucln);
    printf("Boi chung nho nhat cua %d va %d la %d\n", a, b, bcnn);
}
void chucNang3()
{
    int gioVao, gioRa, soGio, tongTien;
    do
    {
        printf("Nhap gio vao , gio ra: ");
        scanf("%d %d", &gioVao, &gioRa);
    } while ((gioVao > gioRa) || gioVao < 12 || (gioRa > 23));
    soGio = gioRa - gioVao;
    if (soGio <= 3)
    {
        tongTien = soGio * 150000;
    }
    else
    {
        tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    }
    if (gioVao >= 14 && gioVao <= 17)
        tongTien *= 0.9;
    printf("Tong tien ban hat tu %d den %d la: %dVND\n", gioVao, gioRa, tongTien);
}
void chucNang4()
{
    struct giaDien bangGiaDien[6] = {
        {50, 1678},
        {100, 1734},
        {200, 2014},
        {300, 2536},
        {400, 2834},
        {401, 2927}};
    int soKwh, tongTien = 0;
    printf("Nhap so kWh tieu thu: ");
    scanf("%d", &soKwh);
    if (soKwh <= bangGiaDien[0].mucTieuThu)
    {
        tongTien = soKwh * bangGiaDien[0].gia;
    }
    else if (soKwh <= bangGiaDien[1].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + (soKwh - 50) * bangGiaDien[1].gia;
    }
    else if (soKwh <= bangGiaDien[2].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + (soKwh - 100) * bangGiaDien[2].gia;
    }
    else if (soKwh <= bangGiaDien[3].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + (soKwh - 200) * bangGiaDien[3].gia;
    }
    else if (soKwh <= bangGiaDien[4].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + 100 * bangGiaDien[3].gia + (soKwh - 300) * bangGiaDien[4].gia;
    }
    else
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + 100 * bangGiaDien[3].gia + 100 * bangGiaDien[4].gia + (soKwh - 400) * bangGiaDien[5].gia;
    }
    printf("Tong tien dien: %d dong\n", tongTien);
}
void chucNang5()
{
    struct loaiTienTe
    {
        int soLuongTo;
        int menhGia;
    };
    struct loaiTienTe dsTienTe[] = {
        {0, 1000},
        {0, 2000},
        {0, 5000},
        {0, 10000},
        {0, 20000},
        {0, 50000},
        {0, 100000},
        {0, 200000},
        {0, 500000}};
    int soPT = 9;
    int soTien;
    printf("Nhap so tien can doi: ");
    scanf("%d", &soTien);
    for (int i = soPT - 1; i >= 0; i--)
    {
        dsTienTe[i].soLuongTo = soTien / dsTienTe[i].menhGia;
        soTien = soTien % dsTienTe[i].menhGia;
        if (soTien == 0)
            break;
    }
    for (int i = 0; i < soPT; i++)
    {
        if (dsTienTe[i].soLuongTo > 0)
        {
            printf("Menh gia: %9d so to: %d\n", dsTienTe[i].menhGia, dsTienTe[i].soLuongTo);
        }
    }
}
void chucNang6()
{
    int tienVay = 12000000, kyHan = 12;
    float laiThang = 0.05;
    int gocPhaiTra = tienVay/kyHan;

    printf("%6s%18s%18s%18s%18s\n", "Thang", "Tien lai", "Goc phai tra", "Tien phai tra", "Con lai");
    for (int i = 1; i <= kyHan; i++)
    {
        int tienLai = tienVay * laiThang;
        tienVay = tienVay - gocPhaiTra;
        printf("%6d%18d%18d%18d%18d\n", i, tienLai, gocPhaiTra, tienLai + gocPhaiTra, tienVay);
    }
}