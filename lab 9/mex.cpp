#include<simplecpp>

//Program to find mex for an user defined array.

main_program{
    int n,i,j;
    cin >> n;
    int arr[n];

    for(i=0;i<n;i++)
        cin >> arr[i];

    i=1;
    while(i<100000){
        for(j=0;j<n;j++){
            if(i==arr[j]){
                i++;
                break;
            }
        }
        if(j==n) break;
    }

    cout << i;
}
