#include<simplecpp>

//Program to draw n-sided star.

main_program{
    int n;

    cout << "Enter the value of n for n-sided star:\t";
    cin >> n;

    turtleSim();
    right(180);
    repeat(n){
        forward(100);
        left(180-(180/n));
    }
    wait(5);
}
