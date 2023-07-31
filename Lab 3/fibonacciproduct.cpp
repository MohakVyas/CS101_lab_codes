#include<simplecpp>

//Print product of first n terms of fibonacci series.

main_program{
    int n, a=1, b=0, tmp, p=1;
    cin >> n;
    while(n-1){
        tmp=a;
        a+=b;
        b=tmp;
        p=p*a;
        n--;
    }
    cout << p;
}
