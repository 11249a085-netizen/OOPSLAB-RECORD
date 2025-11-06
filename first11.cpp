#include<iostream>
using namespace std;
class Complex{
    int a,b,c;
    public:
        Complex(){}
        void get(){
            cout<<"enter two numbers:";
            cin>>a>>b;
        }
    
    void operator++ (){
        a=++a;
        b=++b;
    }
    void operator-- (){
        a=--a;
        b=--b;
    }
    void display(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    Complex obj;
    obj.get();
    ++obj;
    cout<<"increment complex number :";
    obj.display();
    --obj;
    cout<<"decrement complex number : ";
    obj.display();
    return 0;
}