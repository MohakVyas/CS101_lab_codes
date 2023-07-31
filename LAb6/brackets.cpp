#include <simplecpp>

//Program to check if a sequence of paranthesis is valid or not.

int is_valid_bracket_seq(int n){
    int i=0;
    char c;
    while(n){
        cin >> c;
        if(c=='(') i++;
        else if(c==')') i--;
        if(i<0) return 0;
        n--;
    }
    if(i!=0) return 0;
    return 1;
}
