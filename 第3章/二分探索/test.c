#include <stdio.h>
int main(void){
    int a [] = {1,3,5,7,9,11,13,15,17,19,21,23};
    // 探したい値を入力
    int in;
    scanf("%d",&in);

    //配列の長さを取得
    int len = sizeof(a)/sizeof(int);

    //末端の配列番号
    int end = len-1;

    //最初の配列番号
    int start = 0;

    //二分探索スタート
    while (1)
    {
        int mid = (start+end)/2;
        if (a[mid] == in){
            printf("値は%d番目に存在します。",mid+1);
            return 0;
        }
        else if (a[mid] > in)
        {
            end = mid;
        }
        else if (a[mid] < in)
        {
            start = mid;
        }
        if (end-start == 1){
            printf("値はありませんでした。");
            return 0;
        }
        
    }
    


    return 0;
}