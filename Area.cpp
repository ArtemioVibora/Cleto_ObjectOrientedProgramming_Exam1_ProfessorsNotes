#include <iostream>

using namespace std;

class Area
{
    private:
        int length;
        int breadth;
    public:
        Area(int l, int b) : length(l), breadth(b) {
            if (l < 0)
            {
                length = 0;
            }
            if (b < 0)
            {
                breadth = 0;
            }
            cout << "Constructor with arguments had been initialized!" << endl;
        }
        Area() : length(5), breadth(2) {
            cout << "Constructor without arguments had been initialized!" << endl;
        }
        
        void getData()
        {
            cout << "Enter Length: ";
            cin >> length;
            cout << "Enter Breadth: ";
            cin >> breadth;
        }
        
        int areaCalculation()
        {
            return (length * breadth);
        }
        
        void displayArea(int temp)
        {
            cout << "Area = " << temp;
        }
        
        void displayData()
        {
            cout << "Length = " << length << endl;
            cout << "Breadth = " << breadth << endl;
        }
    
};

int main()
{
    // Instantiate classes here
    Area a1;
    Area a2(4, 20);
}
