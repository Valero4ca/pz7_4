#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

using namespace std;
 
void selectSort1(int A[],int n)
{ 
    int k, i, j, min;
    
    for (i = 0; i < n; i++) {
        k = i;
        min = A[i];
        for(j=i+1;j<n;j++)
            if (A[j] < min)
            {
                k = j;
                min = A[j];
            }
        A[k] = A[i];
        A[i] = min;
    }
    
}

void selectSort2(int A[], int size)
{
    int k, i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1, k = i; j < size; j++)
            if (A[j] < A[k]) 
                k = j;
        int c = A[k];
        A[k] = A[i];
        A[i] = c;
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int size;
    int A[1000];
    cout << "Количество элементов >";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " элемент >";
        cin >> A[i];
    }
    selectSort1(A, size);
    cout << "результат сортировки. Метод #1\n";
    for (int i = 0; i < size; i++)
        cout << A[i] << "";
    cout << "\n Массив 2";
    for (int i = 0; i < size; i++)
    {
        A[i] = rand() % 11 - 5;
        cout << A[i] << ".>";
    }
    selectSort2(A, size);
    cout << "результат сортировки.Метод #2\n";
    for (int i = 0; i < size; i++)
        cout << A[i] << "";



    }




void insertSort(int *A, int size)
{
    int t, i, j;
    for (i = 1; i < size; i++)
    {
        t = A[i];
        for (j = i - 1; j >= 0 && A[j] > t; j--)
            A[j + 1] = A[j];
        A[j + 1] = t;
    }
}
void shellSort(int A[], int size)
{
    int i, j, c, d = size;
    d = d / 2;
    while (d > 0)
    {
        for (i = 0; i < size - d; i++)
        {
            j = i;
            while (j >= 0 && A[j] > A[j + d])
            {
                c = A[j];
                A[j] = A[j + d];
                A[j + d] = c;
                j--;
            }
        }
        d = d / 2;
    }
}
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    clock_t t1, t2;
    int A[1000];
    int size;


    сout << ">";
    cin >> size;
    for (int i = 0; i < size; i++) {
        A[i] = rand() % (100 - 50) / 20;
        cout << A[i] << "";

        t1 = clock();
        insertSort(int* A, int size);
        t2 = clock();
        cout << "Прошло " << t2 - t1 << " тактов времени\n";

    }