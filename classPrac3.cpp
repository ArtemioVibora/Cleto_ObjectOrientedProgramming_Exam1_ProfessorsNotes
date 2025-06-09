#include <iostream>

using namespace std;

class Movie
{
    private:
        string name;
        double price;
    public:
        Movie(): name(""), price(0) {}
        Movie(string n, double p) : name(n), price(p) {}
        
        void enterDetails()
        {
            cout << "Enter movie name: ";
            getline(cin, name);
            cout << "Enter movie price: ";
            cin >> price;
        }
        
        void displayDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Price: " << price << " pesos" << endl;
        }
};

int main()
{
    Movie m1, m2("Hello World", 100);
    m1.enterDetails();
    m1.displayDetails();
    m2.displayDetails();
}
