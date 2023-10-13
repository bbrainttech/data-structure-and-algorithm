#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[100], b[100];

#define MAX_NUMBER 800
#define MIN_NUMBER 100
#define SIZE_OF_ARRAY 100

int generateRandInt();
void add();
void mergeArray(int arr1[], int, int arr2[], int, int arr3[]);
void initializeArray();
void store20RandInt();
void display();
void delete();

int main()
{
    srand(time(0));
    initializeArray();
    store20RandInt();
    display();
    add();
    delete ();

    return 0;
}

void initializeArray()
{
    int i = SIZE_OF_ARRAY;

    while (i > 0)
    {
        a[i] = -1;
        i -= 1;
    }
}

int generateRandInt()
{
    return (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;
}

void store20RandInt()
{
    for (int i = 0; i < 20; i++)
    {
        a[i] = generateRandInt();
    }
    printf("\n Initial Array");
}

void display()
{
    int i = 0;
    printf("\n");
    while (i < SIZE_OF_ARRAY)
    {
        if (a[i] != -1)
        {
            printf(" %d ", a[i]);
        }
        i += 1;
    }
}

void mergeArray(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    for (int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr3[i + n1] = arr2[i];
    }
}
void add()
{
    int j = 0, k = 0, p = 0;
    int beforeAddedArray[5];
    while (k < 5)
    {
        beforeAddedArray[k] = a[k];
        k += 1;
    }
    int afterAddedArray[15];
    while (j < 15)
    {
        afterAddedArray[j] = a[j + 5];
        j += 1;
    }
    int rand10Int[10];
    while (p < 10)
    {
        rand10Int[p] = generateRandInt();
        p += 1;
    }
    printf("\n\n 10 newly generated numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", rand10Int[i]);
    }

    mergeArray(beforeAddedArray, 5, rand10Int, 10, b);
    mergeArray(b, 15, afterAddedArray, 15, a);

    printf("\n\n Array after inserting generated numbers : ");
    display();
}
void delete()
{
    int i = 15, j = 15;
    printf("\n\n 5 deleted Items : \n");
    while (i < 20)
    {
        printf(" %d ", a[i]);
        i += 1;
    }
    while (j < 20)
    {
        a[j] = -1;
        j += 1;
    }

    printf("\n\n Array after deleting numbers");
    display();
}