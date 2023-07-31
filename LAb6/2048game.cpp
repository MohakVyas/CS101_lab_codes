#include <simplecpp>

void determine_error(int number);

main_program {
   int number;
   cin >> number;
   determine_error(number);
}

void determine_error(int number){
    int i;
    for(i=1;number-i>=0;i=i*2);
    cout << i/2 << " " << number-(i/2);
}
