#include<simplecpp>

//Program to find value using Taylor Series.

main_program{
    float a=0, b=0, x, n, t1=1, t2, t;
    cin >> x >> n;
    t2 = x;
    for(int i=1;i<=n;i++){
        t1=t1*(x/i);
        a=a+t1;
        t=t2/i;
        t2=-t2*x;
        b=b+t;
    }
    cout << fixed;
    cout.precision(5);
    cout<<(a + 1) * b;
}
