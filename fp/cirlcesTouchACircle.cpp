#include<simplecpp>

//Program to draw 6 circles surrounding a central circle.

void drawPoly(int a, int b){
    repeat(a){
        forward(b);
        right(360/a);
    }
}

main_program{
    turtleSim();
    left(90);

    repeat(6){
        drawPoly(360,1);
        repeat(60){
            forward(1);
            left(1);
        }
    }
    wait(10);
}
