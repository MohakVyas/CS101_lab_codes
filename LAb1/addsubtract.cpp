#include<simplecpp>

/*Program to add all odd integers and subtract
even numbers out of the entered n-numbers.*/

main_program{
    int n,s=0,i,r=-1;
    cin >> n;
    repeat(n){
        cin >> i;
        repeat(i){
            r=r*(-1);
        }
        s=s+(i*r);
        r=-1;
    }
    cout << s;
}
