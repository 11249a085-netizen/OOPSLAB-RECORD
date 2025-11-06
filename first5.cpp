#include<iostream>
using namespace std;
class Student {
    int roll;
    string name;
    float marks;
public:
    void inputdata() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displaydata() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};  
int main() {
    Student s[100];
    int n;
    cout << "Enter number of students : ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Enter details of student " << i + 1 << ":\n";
        s[i].inputdata();}
    for(int i = 0; i < n; i++) {
        cout<<"student info "<<endl;
         s[i].displaydata();
    }
}
