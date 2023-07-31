#include<simplecpp>

//Program to make right angled triangle with"*".

main_program{
    int n,i=1;
    cin >> n;
    repeat(n){
        repeat(i){
            cout << "*";
        }
        cout << endl;
        i++;
    }
}
