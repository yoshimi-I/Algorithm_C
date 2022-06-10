#include <stdio.h>
#include <math.h>
int main(){
    int i,n = 3;
    double a[] = {1,2,3};
    double b[] = {-2,-1,-1};
    double sa,sb,prod;
    for(i = 0;i<n;i++){
        sa += a[i]*a[i];
        sb += b[i]*b[i];
        prod += a[i]*b[i];
    }
    printf("%lf ",acos(prod/(sqrt(sa)*sqrt(sb))));
    return 0;
}