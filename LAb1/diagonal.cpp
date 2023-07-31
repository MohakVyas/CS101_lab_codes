#include<simplecpp>

//Program to draw square with a diagonal.

main_program{
    turtleSim();
    repeat(4){
        right(90);
        forward(100);
    }
    right(135);
    forward(100*sqrt(2));
    wait(10);
}
