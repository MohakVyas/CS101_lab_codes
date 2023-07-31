#include<cmath>
struct Line{

  double x1, y1, x2, y2;

  void initializeTo(double x1, double y1, double x2, double y2){

    this->x1 = x1;

    this->y1 = y1;

    this->x2 = x2;

    this->y2 = y2;

  }

  double calculateSlope(){
        return (this->y2-this->y1)/(this->x2-this->x1);
    //fill up the code, please do not write cout statements here

  }

  double distanceFrom(double x, double y) {
        double r = ((y-x*calculateSlope()+this->x1*calculateSlope()-this->y1)/pow(1+(calculateSlope()*calculateSlope()),0.5));
        if(r<0) return r*(-1);
        return r;
    //fill up the code, please do not write cout statements here

  }



  bool isOnLine(double x, double y) {
        if((y-this->y1)-((this->y2-this->y1)*(x-this->x1))/(this->x2-this->x1)==0) return true;
        return false;
    //fill up the code, please do not write cout statements here

  }

  bool parallelTo(double x1, double y1, double x2, double y2) {
        if((y2-y1)/(x2-x1)==calculateSlope()) return true;
        return false;
    //fill up the code, please do not write cout statements here

  }

};
