#include <iostream>

using namespace std;

class Circle
{
	private:
		double pi;
		double radius;
		double area;
		double circumference;
		
	public:
		Circle() : pi(3.14159), radius(radius), area(area), circumference(circumference) {
		
			cout << "Constructor has been initialized!" << endl;		
		}
		
		void enterDetails()
		{
			cout << "Input the radius of the circle: ";
			cin >> radius; 
		}
		
		void showAreaAndCircumference()
		{
			area = pi * (radius * radius);
			circumference = 2 * pi * radius;
			
			cout << "Area: " << area << endl;
			cout << "Circumference: " << circumference << endl;
		}
			
};

int main()
{
	Circle c;
	c.enterDetails();
	c.showAreaAndCircumference();
}
