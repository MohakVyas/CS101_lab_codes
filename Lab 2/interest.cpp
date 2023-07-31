#include<simplecpp>

//Program to find interest rate based on days and age.

main_program{
    int age, days;
    float r;
    cin >> age;
    cin >> days;
    if(days>6 && days<46)         r=5.00;
    else if(days>45  && days<181) r=5.25;
    else if(days>180 && days<211) r=5.50;
    else if(days>210 && days<366) r=5.75;
    else    r=6.00;
    if(age>=60) r=r+0.5;
    cout << fixed;
    cout.precision(2);
    cout  << r;

}
