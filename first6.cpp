#include <iostream>
using namespace std;

class Time {
private:
    int hrs, min;

public:
    void input();
    void cal( Time T1,  Time T2);
    void display();
};

void Time::input() {
    cout << "Enter hours: ";
    cin >> hrs;
    cout << "Enter minutes: ";
    cin >> min;
}

void Time::cal( Time T1,  Time T2) {
    int totalMin = T1.min + T2.min;
    hrs = T1.hrs + T2.hrs + (totalMin / 60); 
    min = totalMin % 60;                    
}

void Time::display() {
    cout << "Total Time: " << hrs << " hours and " << min << " minutes" << endl;
}

int main() {
    Time T1, T2, T3;

    cout << "Enter first time:" << endl;
    T1.input();

    cout << "Enter second time:" << endl;
    T2.input();

    T3.cal(T1, T2);

    T3.display();

    return 0;
}

