#include<simplecpp>

//Program to convert a number from one given base to other.

main_program{
    int n, b1, b2, a, r, d=0;
    cin >> n;
    cin >> b1;
    cin >> b2;
    a=n;
    for(int i=0;a;i++){
        r=a%10;
        d=d+r*pow(b1,i);
        a=a/10;
    }
    a=0;
    r=1;
    while(d){
        a=a+(d%b2)*r;
        r=r*10;
        d=d/b2;
    }

    cout << a;
}
