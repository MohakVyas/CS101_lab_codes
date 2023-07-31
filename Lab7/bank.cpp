#include<simplecpp>

//Function to perform job of bank management.

void bank_management(int balanceA, int balanceB, int balanceC){
    int n;
    long int r=0, t=0;

    cin >> n;
    for(;n;n--){
        char c1, c2;
        int i;
        cin >> c1 >> c2 >>i;
        if(c1=='A') {
            if(balanceA-i<0){
                r=r*10+1;
                continue;
            }
            r=r*10+2;
            balanceA-=i;
        }
        else if(c1=='B') {
            if(balanceB-i<0){
                r=r*10+1;
                continue;
            }
            r=r*10+2;
            balanceB-=i;
        }
        else if(c1=='C') {
            if(balanceC-i<0){
                r=r*10+1;
                continue;
            }
            r=r*10+2;
            balanceC-=i;
        }
        if(c2=='A') balanceA+=i;
        else if(c2=='B') balanceB+=i;
        else if(c2=='C') balanceC+=i;
    }

    for(;r;r=r/10){
        t=t*10+r%10;
    }

    for(;t;t=t/10){
        if(t%10==1) cout << "Invalid" << endl;
        else if(t%10==2) cout << "Valid" << endl;
    }
    cout << "A" << " " << balanceA << endl;
    cout << "B" << " " << balanceB << endl;
    cout << "C" << " " << balanceC << endl;
}
