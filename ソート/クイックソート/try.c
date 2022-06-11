#include <stdio.h>
void quick(int a[],int left,int right){
    int i,j,pivot,res;
    i = left + 1;
    j = right;
    pivot = left + 1;
    while (i<j){
        if(a[i]<=a[pivot]){
            left = i;
            break;
        }else{
            i+=1;
        }
    }
    while (j>=i){
        if(a[j]< a[pivot]){
            right = j;
            break;
        }else{
            j-=1;
        }
    }
    res = a[pivot];
    a[pivot] = a[right];
    a[right] = res;
    quick(a,0,right-1);
    quick(a,right+1,8);
}
int main(){
    int a[8] = {13,18,15,11,17,12,16,14};
    int pipod =  a[0];
    int left = a[1];
    int right = a[7];
    quick(a,0,8);
    for(int i = 0;i < 8;i++){
        printf("%d ",a[i]);
    }
    return 0;
}