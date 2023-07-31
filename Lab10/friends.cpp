#include<iostream>
using namespace std;

//Program to find friends in social life ;3

int findIn(int a, int l){
    int i;
    for(int j=0;l;j++){
        i=l%10;
        l=l/10;
        if(i==a) return 1;
    }
    return 0;
}


int main(){
    int n;
    cin >> n;

    int a[n][n],arr[n];
    for(int i=0;i<n;i++)    cin >> arr[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=(findIn(i+1,arr[j]) && findIn(j+1,arr[i]) && i!=j);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)   cout << a[i][j] << " ";
        cout << endl;
    }
}
