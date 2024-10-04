#include<stdio.h>
int main(){
    int a[25],i,n,num,ind;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    // Input number of elements
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // Input elements
    printf("Enter the number you want to insert: ");
    scanf("%d",&num);
    // Input number that you want to insert
    printf("Enter the index: ");
    // Input at which you want to insert the element
    scanf("%d",&ind);
    a[n] = a[ind];
    // Making sure that current value stored at the desired index don't get lost
    a[ind] = num;
    // Storing the desired number at desired index
    for(i=0;i<n+1;i++){
        printf("%d\t",a[i]);
    }
    // Printing the updated array
    return 0;
}