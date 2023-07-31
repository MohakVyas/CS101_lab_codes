#include<simplecpp>

//Program to print a 4X4 array seperated by some distance.

void drawSquare(int a){
    repeat(4){
        forward(a);
        right(90);
        wait(0.1);
    }
}

main_program{

    turtleSim();

    repeat(4){
        repeat(4){
            drawSquare(20);
            penUp();
            forward(30);
            penDown();
        }

        penUp();
        right(180);
        forward(120);
        left(90);
        forward(30);
        left(90);

        penDown();
    }
    wait(5);
}
