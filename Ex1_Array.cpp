#include<stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
         if(i % 2 == 0 && i > 0 ){
            if(numbers[i] % 2 != 0){
               sum += numbers[i];
               count++;
               printf("vi tri: %d \n",i);
            }
        } 
    } 
    double avg = (double)sum / count;
    printf("trung binh cong cac so le o vi tri chan la: %.2lf", avg);
    return 0;
}