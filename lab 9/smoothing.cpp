#include<simplecpp>

main_program{
    int k,n,mini,maxi,j;
    double avg;
    cin >> k;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++) cin >> arr[i];

    for(int i=0;i<n;i++){
        avg=0;
        mini=0;
        maxi=n-1;
        if(i-k>0) mini=i-k;
        if(i+k<n) maxi=i+k;
        for(j=mini;j<=maxi;j++){
            avg+=arr[j];
        }
        avg=avg/(maxi-mini+1);
        cout << fixed;
        cout.precision(2);
        cout << avg <<" ";
    }
}
