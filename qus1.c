#include<stdio.h>

int main(){
    int size, pos, value;
    int arr[100];

    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0-based index): ");
    scanf("%d", &pos);

    printf("Enter the new element: ");
    scanf("%d", &value);

    for(int i = size; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    size++;

    printf("Array after insertion:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}