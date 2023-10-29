#include<stdio.h>
#include<math.h>

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
    for(int i = 0; i < n; i++){
         if(i % 2 == 0 && i > 0 ){
            if(numbers[i] % 2 != 0){
               sum += numbers[i];
               count++;
               printf("\nso le o vi tri chan nam o vi tri thu: %d \n",i);
            }
        } 
    } 
    double avg = (double)sum / count;
    printf("\ntrung binh cong cac so le o vi tri chan la: %.2lf\n", avg);
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
    printf("\nSo nho nhat trong mang la: %d\n", smallestNumbers);
    int s = 0;
    int scp;
    for (int i = 0; i < n; i++){
        scp = sqrt(numbers[i]);
        if(scp * scp == numbers[i]){
            s++;
            printf("\nso chinh phuong nam o vi tri thu: %d", i);
        }
    }
    printf("\nvay co %d so chinh phuong", s);
    return 0;
}