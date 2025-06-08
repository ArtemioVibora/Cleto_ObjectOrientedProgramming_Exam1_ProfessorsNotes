#include <iostream>

using namespace std;

class myClass
{
    private:
        int myThing;
    public:
        myClass(int myT) : myThing(myT) {
            cout << "My Class has been initiated" << endl;
        }
        myClass() : myThing(0) {
            cout << "My Class has been initiated" << endl;
        }

        // myClass() : myThing(myThing) {}

        void enterDetails()
        {
            cout << "Enter details: ";
            cin >> myThing;
        }

        void displayDetails()
        {
            cout << "My thing: " << myThing << endl;
        }
};

int main()
{
    myClass m1, m2(2);

    m2.displayDetails();

    m1.enterDetails();
    m1.displayDetails();
}
