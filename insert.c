#include<stdio.h>
int main(){
    int a[25],i,n,num,ind;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to insert: ");
    scanf("%d",&num);
    printf("Enter the index: ");
    scanf("%d",&ind);
    a[n] = a[ind];
    a[ind] = num;
    for(i=0;i<n+1;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}