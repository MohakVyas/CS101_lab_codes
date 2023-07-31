#include<simplecpp>

//Program to draw spiral.

main_program{
    int l=128;
    turtleSim();
    forward(l);
    right(90);
    repeat(8){
        repeat(2){
            forward(l);
            right(90);
        }
        l=l/2;
    }
    wait(10);
}
