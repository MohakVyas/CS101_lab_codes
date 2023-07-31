#include<simplecpp>

//Function to perform task of bank transaction.

void transact(int n, int *x, int *a, int *b){
    char c;
    int *d=a;
    int i=0;
    while(n){
        cin >> c;

        if(c=='P'){
            (*d)++;
            (*x)--;
        }

        else if(c=='R'){
            (*d)--;
            (*x)++;
        }

        else if(c=='S'){
            if(i%2){
                d=a;
                i++;
            }
            else{
                d=b;
                i++;
            }
        }
        n--;
    }
}

