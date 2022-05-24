#include <stdio.h>
int bubble(int A[],int N){
    int rest = 0;
    for (int i = 0; i < N; i++){
        for(int j = N-2;j >=i;j--){
            if(A[j+1]<A[j]){
                rest = A[j];
                A[j] = A[j+1];
                A[j] = rest;
            }
    }
}
}
int main(){
    int N = 5;
    int A[5] = {5,3,4,2,1};
    bubble(A,N);
    for (int i = 0; i < N; i++){
        printf("%d",A[i]);
        printf(" ");
    }
    return 0;
}