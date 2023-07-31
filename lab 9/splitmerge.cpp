#include<simplecpp>

//Program to split an Array and then merge them.

main_program{
    int n,j=0;
    cin >> n;
    int Arr[n];
    int Arr1[n];
    for(int i=0;i<n;i++){
        cin >> Arr[i];
        if(Arr[i]<0){
            Arr1[j]=Arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(Arr[i]>=0){
            Arr1[j]=Arr[i];
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout << Arr1[i] << " ";
    }
}
