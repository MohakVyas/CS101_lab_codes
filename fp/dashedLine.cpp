#include<simplecpp>

//Program to draw dashed line.

main_program{
    turtleSim();
    repeat(10){
        forward(10);
        penUp();
        forward(10);
        penDown();
    }
    wait(5);
}
