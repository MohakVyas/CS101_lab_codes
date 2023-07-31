#include<simplecpp>

//Recursive function to find m+nCm.

int numArr(int m,int n){
    if(m==0 || n==0)    return 1;
    return (numArr(m-1,n-1)*((m+n-1)*(m+n)))/(m*n);
}
