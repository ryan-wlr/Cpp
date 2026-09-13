#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string first;
    string last;
    int age;

    void printFullName() {
        cout << first << " " << last << endl;
    }

    Person() : first(""), last(""), age(0) {}
    Person(const string& firstName, const string& lastName, int personAge)
        : first(firstName), last(lastName), age(personAge) {}
};

int main(){
    Person p;
    p.first = "John";
    p.last = "Doe";
    p.age = 30;
    p.printFullName();
    cout << "Hello, World!" << endl;
    
    return 0;
}