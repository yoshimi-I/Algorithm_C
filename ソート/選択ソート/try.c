#include <stdio.h>
int main(){
    int a[] = {80,41,35,90,40,20,14,523,62464,12,546,745,25,132,56,1,0};
    int min_check;
    int escape;
    int num_place;
    int l = sizeof(a)/sizeof(a[0]);
    for (int i = 0;i<l;i++){
        int min = a[i];
        for (int j = i;j<l;j++){
            min_check = a[j];
            if (min_check < min){
                min = min_check;
                num_place = j;
            }
        }
        escape = a[i];
        a[i] = min;
        a[num_place] = escape;
    }
    for (int k = 0;k < l;k++){
        printf("%d\n",a[k]);
    }
    return 0;
}