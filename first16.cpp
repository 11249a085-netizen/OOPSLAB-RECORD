#include <iostream>
#include <cstring>
using namespace std;

const int sz = 90;

class MyString {
    char str[sz];
public:
    MyString() {
        strcpy(str, "");  
    }

    MyString(const char s[]) {
        strcpy(str, s);
    }

    void display() const {
        cout << str << "\n";
    }

    MyString operator + (const MyString &ss) const {
        MyString temp;
        if (strlen(str) + strlen(ss.str) < sz) {
            strcpy(temp.str, str);
            strcat(temp.str, ss.str);
        } else {
            cout << "String overflow\n";
            strcpy(temp.str, "");
        }
        return temp;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");
    MyString s3;

    s3 = s1 + s2;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
