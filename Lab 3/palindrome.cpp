#include<simplecpp>

//PRogram to check whether an entered number is a palindrome.

main_program{
    int n, r=0, a;
    cin >> n;
    a=n;
    while(a){
        r=r*10+a%10;
        a=a/10;
    }
    if(n==r) cout << "1";
    else cout << "0";
}
