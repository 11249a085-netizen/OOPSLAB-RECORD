#include<iostream>
using namespace std;
class Time{
    private:
    int hrs,min,sec;
    public:
    Time(){
        hrs=0;
        min=0;
        sec=0;
    }
    Time(int h,int m,int s){
        if(h<23&&h>0&&m>0&&m<59&&s>0&&s<59){
        hrs=h;
        min=m;
        sec=s;}
        else{
            cout<<"invalid time ";
        }
    }
    int operator== (Time T3){
        return(hrs==T3.hrs&&min==T3.min&&sec==T3.sec);
    }

};
int main(){
    Time T1(10,56,38),T2(2,43,15);
    if(T1==T2){
        cout<<"*** The clock shows the same time*** ";
    }
    else{
        cout<<"*** The clock shows the different time***";    
    }
}