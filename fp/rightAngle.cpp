#include<simplecpp>

//Program to make right angled triangle with"*".

main_program{
    int n;
    int i=1;
    cout << "Enter the value of n:\t";
    cin >> n;
    repeat(n){
        repeat(i){
            cout << "*";
        }
        cout << endl;
        i++;
    }
}
