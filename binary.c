#include<stdio.h>
int main(){
    int a[100],n,i,j,key,mid,low,high;
    printf("No. of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        // Input array
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    //Bubble sort
    printf("Enter key element: ");
    scanf("%d",&key);
    printf("Sorted array:\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    // Print sorted array
    low = 0;
    // Set low to the smallest index of array
    high = n-1;
    // Set high to the largest index of array
    mid = (low+high)/2;
    // Set mid to the middle index of array
    for(i=0;i<n;i++){
        if(key<a[mid]){
            high = mid; 
            // If the key element is smaller than middle element than it will lie in the part of array smaller than middle element. i.e., left side. So we shift high to the middle index, reducing the size of array by eliminating the right side.
            mid = (low+high)/2;
            // Recalculate mid for reduced array
        }
        else if(key>a[mid]){
            low = mid;
            // If the key element is larger than middle element than it will lie in the part of array larger than middle element. i.e., right side. So we shift low to the middle index, reducing the size of array by eliminating the left side.
            mid = (low+high)/2;
            // Recalculate mid for reduced array            
        }
        else if(key == a[mid]){
            printf("\nElement found at index %d in the sorted array",mid);
            // When key element gets equal to the element of reduced array, the mid is required index. We print mid and break the loop.
            break;
            // Breaking the loop is very important otherwise printf function will run multiple times consecutively.
        }
    }
    return 0;
}