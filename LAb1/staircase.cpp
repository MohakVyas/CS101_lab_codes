#include<simplecpp>

//Program to make stairs.

main_program{
    int n;
    float h;
    cin >> h >> n;
    turtleSim();
    repeat(n){
        left(90);
        forward(h);
        right(90);
        forward(h);
        h=3*(h/4);
    }
    wait(10);
}
