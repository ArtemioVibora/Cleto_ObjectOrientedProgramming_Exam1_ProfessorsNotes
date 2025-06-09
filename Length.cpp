#include <iostream>

using namespace std;

class Length
{
    private:
        int feet;
        float inches;
    
    public:
        Length() : feet(0), inches(0.0) {
            cout << "First Constructor had been called!" << endl;
        }
        
        Length(int ft) : feet(ft)
        {
            inches = 0.0;
            
            cout << "Second Constructor had been called!" << endl;
        }
        
        Length(int ft, float in) : feet(ft), inches(in) {
            cout << "Third Constructor had been called!" << endl;
        }
        
        void displayData()
        {
            cout << "Feet = " << feet << endl;
            cout << "Inches = " << inches << endl;
        }
        
        //Get length if first constructor
        void getLength()
        {
            cout << "Enter feet please: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }
        
        void showLength()
        {
            cout << feet << " feet and " << inches << " inches." << endl; 
        }
        
};


int main()
{
    Length len1, len2(13), len3(11, 6.25);
}
