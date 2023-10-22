#include<stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 1; i <= n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", &numbers[i]);
    }
    int count = 0;
    for(int i = 1; i < n; i++){
         if(i % 2 == 0 && i > 0 ){
            if(numbers[i] % 2 != 0){
               sum += numbers[i];
               count++;
               printf("vi tri thu: %d \n",i);
            }
        } 
    } 
    double avg = (double)sum / count;
    printf("trung binh cong cac so le o vi tri chan la: %.2lf", avg);
    int biggestNumbers = numbers[1];
    for (int i = 1; i <= n; i++){
        if(numbers[i] > biggestNumbers){
            biggestNumbers = numbers[i];
        }
    }
    printf("\nSo lon nhat trong mang la: %d", biggestNumbers);
    int smallestNumbers = numbers[1];
    for(int i=1; i <= n; i++){
        if(numbers[i] < smallestNumbers){
            smallestNumbers = numbers[i];
        }
    }
    printf("\nSo nho nhat trong mang la: %d", smallestNumbers);
    
    return 0;
}