/*Nhập từ bàn phím mảng số nguyên gồm n phần tử.
Tính trung bình cộng các số lẻ ở vị trí chẵn
Tìm số lớn nhất trong mảng vừa nhập
Tìm vị trí các số nhỏ nhất trong mảng
Đếm các số chính phương có trong mảng
Hiện thị các số nguyên tố có trong mảng lên màn hình
Thay thế các phần tử âm có trong mảng bằng giá trị 0
Xóa các phần tử âm có trong mảng
Sắp xếp mảng đã nhập theo thứ tự tăng dần
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n;
    int sum = 0;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    int count = 0;
    for (int i = 1; i < n; i += 2)
    {
        if (numbers[i] % 2 != 0)
        {
            sum += numbers[i];
            count++;
            printf("\nso le o vi tri chan nam o vi tri thu: %d", i + 1);
        }
    }
    double avg = (double)sum / count;
    printf("\ntrung binh cong cac so le o vi tri chan la: %.2lf\n", avg);
    int biggestNumbers = numbers[1];
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > biggestNumbers)
        {
            biggestNumbers = numbers[i];
        }
    }
    printf("\nSo lon nhat trong mang la: %d", biggestNumbers);
    int smallestNumbers = numbers[1];
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < smallestNumbers)
        {
            smallestNumbers = numbers[i];
        }
    }
    printf("\nSo nho nhat trong mang la: %d\n", smallestNumbers);
    int s = 0;
    int scp;
    for (int i = 0; i < n; i++)
    {
        scp = sqrt(numbers[i]);
        if (scp * scp == numbers[i])
        {
            s++;
            printf("\nso chinh phuong nam o vi tri thu: %d", i + 1);
        }
    }
    printf("\nvay co %d so chinh phuong\n", s);
    printf("\n");

    bool snt(int n)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    printf("so nguyen to la: ");
    for (int i = 0; i < n; i++)
    {
        if (snt(numbers[i]))
        {
            printf("%d\t", numbers[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < 0)
        {
            numbers[i] = 0;
        }
    }
    printf("\nmang sau khi cap nhat ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", numbers[i]);
    }
    return 0;
}