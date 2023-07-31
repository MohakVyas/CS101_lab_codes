#include<simplecpp>
#include<math.h>

//Program to print a square inside a square

void drawSquare(int a){
    repeat(4){
        forward(a);
        right(90);
        wait(0.1);
    }
}

main_program{
    turtleSim();

    drawSquare(100);

    penUp();
    forward(50);
    right(45);
    penDown();

    drawSquare(50*sqrt(2));

    wait(5);
}

