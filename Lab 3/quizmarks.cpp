#include<simplecpp>

main_program{
    int n, max=0, min=5, f0=0, f1=0, f2=0, f3=0, f4=0, f5=0, a;
    cin >> n;
    while(n){
        cin >> a;
        if(a>max) max=a;
        if(a<min) min=a;
        if(a==0)  f0++;
        else if(a==1) f1++;
        else if(a==2) f2++;
        else if(a==3) f3++;
        else if(a==4) f4++;
        else if(a==5) f5++;
        n--;
    }

    cout << max <<" " << min <<" " << f0 <<" "<< f1 <<" "<< f2 <<" "<< f3 <<" "<< f4 <<" "<< f5;

}
