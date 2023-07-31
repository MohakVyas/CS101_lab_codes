#include<iostream>
using namespace std;
struct Stream{
	int top_index = -1;
	char a[11];

    void reset(){
        top_index = -1;
	}

    bool empty(){
        if(top_index==-1) return true;
        return false;
    }

	bool push(char c){
        if(top_index==10) return false;
        a[top_index+1]=c;
        top_index++;
        return true;
	}

	char pop(){
        char tmp;

        if(empty()) return '\0';
        if(top_index==0){
            tmp = a[0];
            top_index = -1;
            return tmp;
        }
        tmp = a[top_index-1];
        a[top_index -1]=a[top_index];
        top_index--;
        return tmp;
	}

	char top(){
        if(empty()) return '\0';
        return a[top_index];
	}

	void printStream(){
        for(int i=0;i<=top_index;i++){
            cout << a[i];
            if(i==top_index) cout << endl;
            else cout << " ";
        }
	}
};
