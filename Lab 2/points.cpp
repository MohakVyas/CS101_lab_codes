#include<simplecpp>

//Program to find whether two given points lie on same side of a given line.

main_program{
    int a, b, c, x1, x2, y1, y2;
    cin >> a >> b >> c >> x1 >> y1 >> x2 >> y2;
    if((a*x1+b*y1+c)*(a*x2+b*y2+c)>0) cout << "1";
    else if((a*x1+b*y1+c)*(a*x2+b*y2+c)<0) cout << "0";
    else cout << "2";
}
