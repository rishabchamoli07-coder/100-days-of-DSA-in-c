#include <stdio.h>
// input the two arrays and merge them in third array and print in ascending order
int main()
{
    int n1, n2;
    int arr1[n1];
    int arr2[n2];
    int k = 0;
    int m[k];

    printf("enter the size of array1:");
    scanf("%d", &n1);
    printf("enter the elements of first array\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("enter the size of array2:");
    scanf("%d", &n2);
    printf("enter the elements of second array\n");
    for (int j = 0; j < n2; j++)
        scanf("%d", &arr2[j]);
    for (int i = 0; i < n1; i++)
        m[k] = arr1[i];
    for (int i = 0; i < n2; i++)
        m[k + 5] = arr2[i];
    printf("the elements of merged array are:\n");
    for (int i = 0; i < n1 + n2; i++)
        printf(" %d ", m[k]);

    return 0;
}