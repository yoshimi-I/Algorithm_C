#include <stdio.h>
int main(void){
    int i;
    int N = 5;
    // 配列の初期化
    int a[5] = {1,2,3,4,5};
    for (i = 0;i<N;i++){
        printf("%d番目の配列は%dです\n",i,a[i]);
    }

    return 0;
}