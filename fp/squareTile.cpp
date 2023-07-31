#include<simplecpp>

//Program to print a square tile pattern

void drawSquare(int a){
    repeat(4){
        forward(a);
        right(90);
        wait(0.1);
    }
}

main_program{
    int times;
    cout << "Enter the number of squares you want:\t";
    cin >> times;
    turtleSim();
    repeat(times){
        drawSquare(100);
        right(360/times);
    }
    wait(2);
}
