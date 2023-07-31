#include<simplecpp>

//Program to print the plate pattern.

main_program{
    turtleSim();

    repeat(3){
        repeat(240){
            forward(0.1);
            right(1);
        }
        forward(1);
        repeat(240){
            forward(0.1);
            left(1);
        }
    }
    wait(5);
}
