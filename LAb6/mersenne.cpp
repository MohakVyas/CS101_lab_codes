#include <simplecpp>

//Program to check whether a number is mersenne number or not.

bool mersenne(int n){
    int i, j, c=1;
    for(i=1;i<=n+1;i=i*2)                   //To che less than a power of 2
        if(i==n+1){
            c=0;
            for(j=2;j<=n/2;j++)
                if(n%i==0){                 //To check if its prime
                    c=1;
                    break;
                }
            if(c==0) return 1;
        }
    return 0;
}
