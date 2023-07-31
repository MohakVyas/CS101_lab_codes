#include<simplecpp>


main_program{
    int nf,na,j=0,c;
    cin >> nf;
    char f[nf];
    for(int i=0;i<nf;i++) cin >> f[i];

    cin >> na;
    char a[na];
    for(int i=0;i<na;i++) cin >> a[i];

    for(int i=0;i<na;i++){
        if(a[i]==f[j]){
            for(c=1;c<nf;c++){
                if(a[i+c]!=f[j+c]) break;
            }
            if(c==nf){
                cout << "1";
                return 1;
            }
        }
    }
    cout << "0";
    return 0;
}
