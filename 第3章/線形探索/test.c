#include <stdio.h>
int main(void){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int num;
    int ans;
    scanf("%d",&num);
    for (int i = 0;i < sizeof(a)/sizeof(a[0]);i++){
        if(num == i){
            printf("%dは%d番目に格納されています。",num,i);
            return 0;
        }
    }
    printf("見つかりませんでした");
    return 0;
}