#include<stdio.h>

typedef struct stack
{
    char data[100];
    int top;
}s;

int empty(s *p){
    return(p->top == -1);
}

int top (s *p){
    return(p->data [p->top]);
}

void push(s *p, char x){
    p -> data[++(p -> top)] = x;
}

void pop (s *p){
    if(!empty(p)){
        (p -> top) = (p -> top) - 1;
    }
}

int main(){
    s s;
    s.top = -1;

    char ch, str[10] = {'A', 'B', 'C', 'D', 'E'};

    int i, len = sizeof(str);

    for(i=0; i<len; i++){
        push(&s, str[i]);
    }

    printf("Reversed String: ");
    while(!empty(&s)){
        printf("%c", top(&s));
        pop(&s);
    }
    return 0;
}