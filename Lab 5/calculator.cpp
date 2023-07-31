#include<simplecpp>

//Program to perform task of calculation

main_program{
    float a, b;
    char c;

    cin >> a;
    while(1){
        cin >> c;
        if(c=='=') break;
        cin >> b;
        if     (c=='+') a=a+b;
        else if(c=='-') a=a-b;
        else if(c=='*') a=a*b;
        else if(c=='/') a=a/b;
    }

    cout << fixed;
    cout.precision(2);
    cout << a;
}
