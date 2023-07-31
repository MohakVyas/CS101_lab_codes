#include<simplecpp>

//Program to find diff. of min and max number out of the three entered.

main_program{
    int a, b, c, max, min;
    cin >> a >> b >> c;
    max=a;
    min=c;
    if(b>max || c>max){
        if(b>c) max=b;
        else max=c;
    }

    if(min>a || min>b){
        if(a>b) min=b;
        else min=a;
    }

    cout << max-min;

}
