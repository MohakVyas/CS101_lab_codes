#include<simplecpp>

//Program to multiply all digit of a number.

main_program{
    int N,i=1;
    cin >> N;
    while(N){
        i=i*(N%10);
        N=N/10;
    }
    cout << i;
}
