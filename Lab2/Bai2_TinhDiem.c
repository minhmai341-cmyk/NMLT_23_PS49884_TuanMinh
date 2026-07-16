#include <stdio.h>
int main(){
    int toan,ly,hoa;
    printf("Nhap diem Toan: ");
    scanf("%d",&toan);
    printf("Nhap diem Ly: ");
    scanf("%d",&ly);
    printf("Nhap diem Hoa: ");
    scanf("%d",&hoa);

    printf("Toan: %d\nLy: %d\nHoa: %d\nDiem trung binh: %.2f\n",toan,ly,hoa,(toan*3 + ly*2 + hoa)/6.0);
    return 0;
}