#include<stdio.h>
int main()
{int a[30],i ,n ;
printf("no. of elements");
scanf("%d",&n); 
//Input of number of elements
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}
// Input of elements
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
// Printing elements
    return 0;
}