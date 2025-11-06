#include<iostream>
using namespace std;
class unaryop{
    int x,y,z;
    public:
    unaryop(){
        x=0;
        y=0;
        z=0;
    }
    unaryop(int d=0,int e=0,int v=0){
        x=d;
        y=e;
        z=v;
    }
    void display(){
        cout<<"\n"<<x<<" "<<y<<" "<<z<<" "<<endl;
    }
    void operator- ();
};
void unaryop :: operator- (){
    x=-x;
    y=-y;
    z=-z;
}
int main(){
    unaryop un(10,20,30);
    cout<<"\n numbers are : ";
    un.display();
    -un;
    cout<<"\n numbers are after overloading minus(-) operator : \n";
    un.display();
    return 0 ;
}