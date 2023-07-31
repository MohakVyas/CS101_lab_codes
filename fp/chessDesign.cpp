#include<simplecpp>

//Program to print the chess type design.

void drawSquare(int a){
    repeat(4){
        forward(a);
        right(90);
        wait(0.1);
    }
}

main_program{
    turtleSim();

    repeat(8){
        repeat(8){
            drawSquare(20);
            penUp();
            forward(20);
            penDown();
        }

        right(180);
        forward(160);
        left(90);
        forward(20);
        left(90);
    }

    wait(5);
}
