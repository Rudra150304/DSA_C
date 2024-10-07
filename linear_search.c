#include<stdio.h>
int main(){
    int a[25],n,i,key;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // Input array
    printf("Enter the key element");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key == a[i]){
            // Compare each element with the key element and if they get equal, print the index and break the loop.
            printf("Element found at %d index",i);
            break;
        }
    }
    return 0;
}