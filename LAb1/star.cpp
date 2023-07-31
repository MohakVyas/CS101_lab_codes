#include<simplecpp>

//Program to draw 5-sided star.

main_program{
    int n;
    n=5;

    turtleSim();
    right(180);
    repeat(n){
        forward(200);
        left(180-(180/n));
    }
    wait(10);
}
