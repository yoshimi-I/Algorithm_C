#include<stdio.h>
// まずは配列と一番上のインデックスの指定
int top = 0,S[1000];
int *data;

// push関数の実装
void push(int x){
    top = top+1;
    S[top] = x;
    data = &S[top];
}
// pop関数の実装
int pop(){
    
    top--;
    data = &S[top];
    return S[top+1];
}
int main(){
    int a,b;
    push(34);
    push(35);
    printf("%d\n",*data);
    printf("%p\n",data);
    a = pop();
    printf("%d\n",*data);
    printf("%p\n",data);
    return 0;
}