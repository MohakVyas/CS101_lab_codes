#include<simplecpp>

//Program to print Pascal's Triangle

main_program{
    long int r, c, n, i;
    cin >> n;
    for(r=1;r<=n;r++){
        i=1;
        for(c=1;c<=r;c++){
            cout << i << " ";
            i=(i*(r-c))/c;
        }
        cout << endl;
    }
}
