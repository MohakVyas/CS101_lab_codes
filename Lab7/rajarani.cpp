#include<simplecpp>

//Function to find a safe place from all the queens on chessboard.

int safe(int  q1x, int q1y,int  q2x, int q2y,int  q3x, int q3y,int  q4x, int q4y,int  q5x, int q5y){
    int r, c;
    for(r=1;r<=8;r++){
        if(r==q1x || r==q2x || r==q3x || r==q4x || r==q5x) continue;
        for(c=1;c<=8;c++){
            if(c==q1y || c==q2y || c==q3y || c==q4y || c==q5y) continue;
            else if(abs(r-q1x)==abs(c-q1y)||abs(r-q2x)==abs(c-q2y)||abs(r-q3x)==abs(c-q3y)||abs(r-q4x)==abs(c-q4y)|| abs(r-q5x)==abs(c-q5y)) continue;
            return 8*r+c;
        }
    }
    return -1;
}
