#include<iostream>
using namespace std;
int main(){ 
    int fs,ps,age;
    string name;
    cout<<"enter name: ";
        cin>>name;
        cout<<"enter age :";
        cin>>age;
        cout<<"enter fs :";
        cin>>fs;
        cout<<"enter ps:";
        cin>>ps; 
     cout<<"The medical report of the patient : "<<endl;
     cout<<"name="<<name<<endl;
        cout<<"age="<<age<<endl;
        cout<<"fasting sugar level = "<<fs<<"\n post meal sugar level="<<ps<<endl;
    if(fs>=126||ps>=200){
        cout<<"the patient is not normal .he has sugar +ve  "<<endl;
        }
        else{
             cout<<"the patient is normal "<<endl;
        }
     
    
    return 0;
}