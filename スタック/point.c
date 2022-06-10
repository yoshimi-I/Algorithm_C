//ポインタを用いた実装
# include <stdio.h>
int stack[8];

//ポインタ変数の宣言
int *head;
//配列の先頭のポインタを代入
head = &stack[0];

//pop関数の実装(値を取り出す)
int pop(){
    int pop_num = *head;
    head = head-sizeof(stack[0]);
    return pop_num;
}

//push関数の実装(値の追加)
void push(int a){
    head = head + sizeof(stack[0]);
    *head = a;
}


int main(){
    push(1);
    push(2);
    int ans = pop();
    printf("%d",ans);
    push(3);
    int ans_2 = pop();
    printf("%d",ans);
    return 0;
}