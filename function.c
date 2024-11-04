#include<stdio.h>
int sum(int x, int y){
    return (x+y);
}
int main(){
    int a = 5, b = 7;
    int c = sum(a,b);
    printf("%d",c);
    return 0;
}