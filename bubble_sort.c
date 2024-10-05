#include<stdio.h>
int main(){
    int a[100],n,i,j;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    // Input array
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                // Compare adjacent values
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                // If value at higher index is smaller then swap
            }
        }
    }
    printf("Sorted array:\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    // Print sorted array
    return 0;
}