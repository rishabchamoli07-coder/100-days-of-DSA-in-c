#include <stdio.h>
int main(){
 //Given an array of n integers, reverse the array in-place using two-pointer approach.
int n;
int arr[n];
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the elements of the array");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int start=0;
int end = n-1;
for(int i=0;i<n/2;i++){
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
printf("reversed array is:\n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
    return 0;
}