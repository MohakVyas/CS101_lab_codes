#include<simplecpp>

//Program to evaluate the value of the expression.

main_program{
    float i, n ,a;
    cin >> n;
    i=n-1+(n-1)/(2*n);
    for(n--; n>=2 ; n--) i=n-1+(n-1)/i;
    cout << fixed;
    cout.precision(4);
    cout << i-1;
}
