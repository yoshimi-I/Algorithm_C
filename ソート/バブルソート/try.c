#include <stdio.h>
int main(){
    int a[] = {80,41,35,90,40,20};
    int l;
    int t;
    l = sizeof(a)/sizeof(a[0]);
    for (int i = 0;i < l-1;i++){
        for (int j = l-1;j>i;j--){
            if (a[j] <= a[j-1]){
                t = a[j-1];
                a[j-1] = a[j];
                a[j] = t;
            }
        }
    }
    for (int k = 0;k < l;k++){
        printf("%d\n",a[k]);
    }
    return 0;
}