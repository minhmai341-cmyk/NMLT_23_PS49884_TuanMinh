#include <stdio.h>
#include <string.h>

int main() {
    char mssv[50];
    char ho_ten[100];
    int nam_sinh;
    int tuoi;
    float diem_tb;

    printf("Nhap Ma so sinh vien (MSSV): ");
    scanf("%s", mssv);
    
    while (getchar() != '\n'); 

    printf("Nhap Ho va Ten: ");
    fgets(ho_ten, sizeof(ho_ten), stdin);

    printf("Nhap Nam Sinh: ");
    scanf("%d", &nam_sinh);

    printf("Nhap Diem Trung Binh: ");
    scanf("%f", &diem_tb);

    printf("\nMa so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", ho_ten);
    printf("Nam sinh: %d\n", nam_sinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.2f\n", diem_tb); 

    return 0;
}