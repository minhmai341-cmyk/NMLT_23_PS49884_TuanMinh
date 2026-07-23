#include <stdio.h>
int main(){
    int n,m;
    printf("in các số từ 1-10\n");
    for(int i=0; i<=10; i++){
        printf("%d\t",i);
    }
    printf("\nin các số từ 1-10\n");   
    for (int i = 2; i <=10; i+=2)
    {
        if (i%2==0)
        {
            printf("%d\t",i);
        }
        
    }
    printf("\nNhap n, m: ");
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=100; i++)
    {
        if (i%n==0 && i%m==0)
        {
            printf("%d\t",i);
        }
        
    }
    
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("\n\nBang cuu chuong %d\n",n);
    for(int i=1; i<=10; i++){
        printf("%2d x %2d = %d\n",n,i,n*i);
    }
    return 0;
}
