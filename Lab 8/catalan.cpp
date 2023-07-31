#include<simplecpp>

//Recursive function to find nth term of catalan series.

int catalan(int n){
    int r=0;
    if(n<2) return 1;
    for(int i=0;i<n;i++)
        r=r+(catalan(n-(i+1))*catalan(i));
    return r;
}
