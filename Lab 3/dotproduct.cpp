#include<simplecpp>

//Program to find dot product.

main_program{
    int a, b, n, d=0;
    cin >> n;
    while(n){
        cin >> a >> b;
        d=d+a*b;
        n--;
    }
    cout << d;
}
