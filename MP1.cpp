#include <iostream>

using namespace std;

class Circle
{
	private:
		//Turned to double to get the approximate value
		double radius;
		double area;
		double circumference;
	
	public:
		Circle() : radius(0.0), area(0.0), circumference(0.0) {
			cout << "Constructor has been initialized!" << endl;
		}
		
		//Going to implement a getter for pi
		double getPi()
		{
			return 3.14159;
		}
		
		void showAreaAndCircumference()
		{
			area = getPi() * (radius * radius);
			circumference = 2 * getPi() * radius;
			
			cout << "Area: " << area << endl;
			cout << "Circumference: " << circumference << endl;
		}
		
		void inputDetails()
		{
			cout << "Input the radius of the circle: ";
			cin >> radius;
		}		
};

int main()
{
	Circle c;
	c.inputDetails();
	c.showAreaAndCircumference();
}
