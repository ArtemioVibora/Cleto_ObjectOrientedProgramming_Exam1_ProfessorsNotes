#include <iostream>

using namespace std;

class Person
{
    private:
        string name;
    public:
    
        Person(string n) : name(n) {}
        Person() : name(name) {}
        
        void enterData()
        {
            cout << "Enter name: ";
            cin >> name;
        }
        
        void showData()
        {
            cout << "Name: " << name << endl;
        }
        
};

class Student : public Person
{
    private:
        int studentNumber;
    public:
        Student(string n, int sn) : Person(n), studentNumber(sn) {};
        Student() : Person(""), studentNumber(0) {}
    
        void enterData()
        {
            Person::enterData();
            cout << "Enter student number: ";
            cin >> studentNumber;
        }
        
        void showData()
        {
            Person::showData();
            cout << "Student no.: " << studentNumber << endl;
        }
};

int main()
{
    Student s;
    
    s.enterData();
    s.showData();
}
