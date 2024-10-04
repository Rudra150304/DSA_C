#include<stdio.h>
int main()
{int a[30],i ,n ;
printf("no. of elements");
scanf("%d",&n);
for (i=0;i<n;i++){
    scanf("%d",&a[i]);

}
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
    return 0;
}