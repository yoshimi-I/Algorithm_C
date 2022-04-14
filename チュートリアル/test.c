#include <stdio.h>
void cal();
int main(void){
    int plus,minus;
    cal(30,10,&plus,&minus);
    printf("%d\n",plus);
    printf("%d\n",minus);
    return 0;
}
void cal(int x,int y,int *a,int *b){
    *a = x +y;
    *b = x-y;
}