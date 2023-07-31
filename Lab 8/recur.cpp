#include<simplecpp>

//function to find the nth term of the given series.

int t(int n){
    if(n==1) return 1;
    if(n==2) return 4;
    return t(n-1)-t(n-2);
}
