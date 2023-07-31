#include<iostream>
using namespace std;

//Program to find mines and the number of adjacent mines in minesweeper.
int isValid(int i, int j, int m, int n){
    if(i>=0 && i<m && j>=0 && j<n) return 1;
    return 0;
}

int isMine(int i, int j, int k, int mines[][2]){
    for(int t=0;t<k;t++)
        if(mines[t][0]==i && mines[t][1]==j) return 1;
    return 0;
}

int numMines(int i, int j, int m, int n, int k, int mines[][2]){
    int c=0;
    if(isValid(i-1,j,m,n) && (isMine(i-1,j,k,mines)))       c++;
    if(isValid(i+1,j,m,n) && (isMine(i+1,j,k,mines)))      c++;
    if(isValid(i-1,j-1,m,n) && (isMine(i-1,j-1,k,mines)))  c++;
    if(isValid(i,j-1,m,n) && (isMine(i,j-1,k,mines)))      c++;
    if(isValid(i+1,j-1,m,n) && (isMine(i+1,j-1,k,mines)))  c++;
    if(isValid(i-1,j+1,m,n) && (isMine(i-1,j+1,k,mines)))  c++;
    if(isValid(i,j+1,m,n) && (isMine(i,j+1,k,mines)))      c++;
    if(isValid(i+1,j+1,m,n) && (isMine(i+1,j+1,k,mines)))  c++;

    return c;
}

int main(){
    int m, n, k;
    cin >> m >> n >> k;
    int x, y;
    int mines[k][2];
    char arr[m][n];
    int i,j;
    for( i=0;i<k;i++){
        cin >> x >> y;
        mines[i][0]=x-1;
        mines[i][1]=y-1;
    }

    for( i=0;i<m;i++)
        for(j=0;j<n;j++)
            arr[i][j]='0'+numMines(i,j,m,n,k,mines);

    for( i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(isMine(i,j,k,mines)) arr[i][j]='M';

    for( i=0;i<m;i++){
        for( j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
