#include<stdio.h>

int main(){
    char name[100];
    printf("Nhap ho va ten: ");
    fflush(stdin);
    gets(name);
    printf("Ho ten vua nhap: %s\n", name);
    return 0;
}