#include<iostream>

using namespace std;
class student{
    private:
    int height;
    public:
    student(){
        height=0;
    } 
    void getheight(int h){
        height=h;
    }
     int operator> (student s3){
       if(height>=s3.height)
       {
        return 1;
       }
       else if(height==s3.height)
       {
        return 0;
       }
       else 
       {
        return 0;
       }
     }
};
int main(){
    student s1,s2,s3;
    s1.getheight(170);
    s2.getheight(175);
    if(s1>s2){
       cout<<"***student 1 greater then student 2 ***";
    }
    else if(s2>s1){
        cout<<"***student 2 greater then student 1 ***";    
    }
    else{
         cout<<"*** Both have same height *** ";    
    }
}