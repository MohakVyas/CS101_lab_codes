#include <iostream>

using namespace std;

struct my_clock{
    unsigned int h, m;

    void setTime(unsigned int h, unsigned int m){
        this->h=h;
        this->m=m;
    }

    void nextMinute(){
        if(this->m==59) {
            this->m=0;
            if(this->h==23) this->h=0;
            else this->h++;
        }
        else this->m++;
    }

    void nextHour(){
        if(this->h==23) this->h=0;
        else this->h++;
    }

    void prevMinute(){
        if(this->m==0){
            this->m=59;
            if(this->h==0) this->h=23;
            else this->h--;
        }
        else this->m--;
    }

    void addTime(unsigned int h,unsigned int m){
        int t=0;
        this->m=this->m+m;
        while(this->m>=60){
            this->m=this->m-60;
            t++;
        }
        h=h+t;
        this->h=this->h+h;
        while(this->h>=24) this->h=this->h-24;
    }

    void currentTime(int format){
        bool n=false;
        if(format==1){
            if(this->h>12){
                n=true;
                if(this->h-12<10)cout << "0" << this->h-12;
                else cout << this->h;
                cout << ":";
            }
            else{
                if(this->h<10) cout << "0" << this->h;
                else cout << this->h;
                cout << ":";
            }
            if(this->m<10) cout << "0";
            cout << this->m;
            if(this->h==12 && this->m>0) n=true;
            if(n) cout << " PM" << endl;
            else cout << " AM" << endl;
        }
        else if(format==2){
            if(this->h<10) cout << "0";
            cout << this->h << ":";
            if(this->m<10) cout << "0";
            cout << this->m <<endl;
        }
    }
};
