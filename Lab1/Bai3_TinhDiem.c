#include <stdio.h>
#include <string.h>

int main() {
    char mssv[50];
    char ho_ten[100];
    float diem_toan, diem_ly, diem_hoa;
    float diem_trung_binh;

    printf("Nhap Ma so sinh vien (MSSV): ");
    scanf("%s", mssv);
    
    while (getchar() != '\n'); 

    printf("Nhap Ho va Ten: ");
    fgets(ho_ten, sizeof(ho_ten), stdin);
    ho_ten[strcspn(ho_ten, "\n")] = '\0';

    printf("Nhap Diem Toan: ");
    scanf("%f", &diem_toan);

    printf("Nhap Diem Ly: ");
    scanf("%f", &diem_ly);

    printf("Nhap Diem Hoa: ");
    scanf("%f", &diem_hoa);

    diem_trung_binh = (diem_toan * 2 + diem_ly + diem_hoa) / 4;

    printf("\nMa so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", ho_ten);
    printf("Diem Trung Binh: %.2f\n", diem_trung_binh);

    return 0;
}