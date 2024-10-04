#include<stdio.h>
int main(){
    int a[30],i,n,num,ind;
    printf("enter no. of elements");
    scanf("%d" ,&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);     
    }
    printf("enter the no. to insert");
    scanf("%d",&num);
    printf("enter index");
    scanf("%d",&ind);
    a[n]=a[ind];
    a[ind]=num;
    for(i=0;i<n+1;i++){
        printf("%d",a[i]);
    }
    return 0;
}
