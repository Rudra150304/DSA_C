#include<stdio.h>
int main(){
    int a[50],n,i,j,temp,min;
    printf("No. of elements: ");
    scanf("%d",&n);
    printf("Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // Input array
    for(i=0;i<n-1;i++){
        min = i;
        // Assume minimum valuie is stored at index i
        for(j=i+1;j<n-1;j++){
            if(a[j]<a[min]){
                // If minimum idex is not i then set min to the index storing lowest value in array
                min = j;
            }
        }
        if(min != i){
            // If minimum index is not i then swap value at index i with the value at minimum index
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("Sorted array:\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    // Print the sorted array
    return 0;
}