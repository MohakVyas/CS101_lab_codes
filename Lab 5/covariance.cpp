#include<simplecpp>

//Program to find covariance

main_program{
    float x, y, a=0, b=0, c=0;
    int n;

    cin >> n;
    repeat(n){
        cin >> x >> y;
        a+=x;
        b+=y;
        c+=x*y;
    }
    cout << fixed;
    cout.precision(2);
    cout << (c/n)-(a/n)*(b/n);

}
