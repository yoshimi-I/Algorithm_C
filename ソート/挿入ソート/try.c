#include <stdio.h>
int main(){
    int a[] = {80,41,35,90,40,20};
    int len = sizeof(a)/sizeof(a[0]);
    int seleck;
    for (int i = 1;i < len+1;i++){
        seleck = a[i];
        int j = i-1;
        while (j >= 0 && seleck < a[j])
        {
            a[j+1] = a[j];
            j --;
        }
        a[j+1] = seleck;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    
    return 0;
}