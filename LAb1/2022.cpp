#include<simplecpp>
//Program to print 2022.
main_program{
    turtleSim();
    repeat(2){
        forward(10);
        right(90);
    }
    repeat(2){
        forward(10);
        left(90);
    }
    forward(10);
    penUp();
    forward(10);

    penDown();
    left(90);
    repeat(2){
        forward(20);
        right(90);
        forward(10);
        right(90);
    }
    right(90);
    penUp();
    forward(20);

    repeat(2){
        left(90);
        forward(20);
        right(90);
        penDown();
        repeat(2){
            forward(10);
            right(90);
        }
        repeat(2){
            forward(10);
            left(90);
        }
        forward(10);
        penUp();
        forward(10);
        penUp();
    }
    wait(10);
}