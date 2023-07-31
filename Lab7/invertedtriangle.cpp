#include<simplecpp>

//Program to print inverted triangle of alphabets

main_program{
    int r, c, n;
    cin >> n;
    for(r=0;r<n;r++){
        for(c=0;c<n-r;c++){
            char p='A';
            p+=c;
            cout << p << " ";
        }
        cout<<endl;
    }
}
