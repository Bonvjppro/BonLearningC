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
#include <string.h>

const int MAX = 100;

double calculateAvg(int numbers[MAX], int n)
{
    int sum = 0;
    int count = 0;
    float avg;

    printf("\nso le o vi tri chan nam o vi tri thu: ");

    for (int i = 1; i <= n; i += 2)
    {
        if (numbers[i] % 2 != 0)
        {
            sum += numbers[i];
            count++;
            printf("%d   ", i + 1);
        }
    }

    avg = (float)sum / count;

    printf("\ntrung binh cong cac so le o vi tri chan la: %.2lf\n", avg);

    return avg;
}

int findBiggestNumber(int numbers[MAX], int n)
{
    int biggestNumbers = numbers[0];

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > biggestNumbers)
        {
            biggestNumbers = numbers[i];
        }
    }

    printf("\nSo lon nhat trong mang la: %d\n", biggestNumbers);

    return biggestNumbers;
}

int findSmallestNumbersIndex(int numbers[MAX], int n)
{
    int smallestNumber = numbers[0];

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < smallestNumber)
        {
            smallestNumber = numbers[i];
        }
    }

    printf("\nCac so nho nhat trong mang nam o vi tri: ");

    for (int i = 0; i < n; i++)
    {

        if (numbers[i] == smallestNumber)
        {
            printf("%d   ", i + 1);
        }
    }

    printf("\n");

    return smallestNumber;
}

int findSquareNumbers(int numbers[MAX], int n)
{
    int s = 0;
    int squareNum;

    printf("\nSo chinh phuong nam o vi tri: ");

    for (int i = 0; i < n; i++)
    {
        squareNum = sqrt(numbers[i]);
        if (squareNum * squareNum == numbers[i])
        {
            s++;
            printf("%d   ", i + 1);
        }
    }

    printf("\nVay co %d so chinh phuong.\n", s);
    printf("\n");
}

bool isPrime(int number)
{
    int n;

    for (int i = 0; i < n; i++)
    {
        if (number <= 1)
        {
            return false;
        }
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

void findPrimeNum(int numbers[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isPrime(numbers[i]))
        {
            printf("%d  ", numbers[i]);
        }
    }

    printf("la so nguyen to\n");
}

void sortTheArray(int numbers[MAX], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("\nMang sau khi sap xep: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

void changeNegativeValueTo0(int numbers[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < 0)
        {
            numbers[i] = 0;
        }
    }

    printf("\nmang sau khi cap nhat: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

int deleteNegative(int numbers[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] <= 0)
        {
            for (int j = i; j < n - 1; j++)
            {
                numbers[j] = numbers[j + 1];
            }
            n--;
            i--;
        }
    }

    printf("\nMang sau khi xoa cac gia tri am: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", numbers[i]);
    }

    return n;
}

int main()
{
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int numbers[MAX];

    for (int i = 0; i < n; i++)
    {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\n");

    int cau;

    printf("Nhap cau can hien ra: "); // nhap so 9 hien ra tat ca.
    scanf("%d", &cau);

    switch (cau)
    {
    case 1:
        calculateAvg(numbers, n);
        break;

    case 2:
        findBiggestNumber(numbers, n);
        break;

    case 3:
        findSmallestNumbersIndex(numbers, n);
        break;

    case 4:
        findSquareNumbers(numbers, n);
        break;

    case 5:
        findPrimeNum(numbers, n);
        break;

    case 6:
        changeNegativeValueTo0(numbers, n);
        break;

    case 7:
        deleteNegative(numbers, n);
        break;

    case 8:
        sortTheArray(numbers, n);
        break;

    case 9:
        calculateAvg(numbers, n);
        findBiggestNumber(numbers, n);
        findSmallestNumbersIndex(numbers, n);
        findSquareNumbers(numbers, n);
        findPrimeNum(numbers, n);
        changeNegativeValueTo0(numbers, n);
        int newN = deleteNegative(numbers, n);
        sortTheArray(numbers, newN);
        break;
    }
    return 0;
}