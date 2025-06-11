#include <iostream>

using namespace std;

class Employee
{
	private:
		string employeeName;
		int employeeID;
		double employeeSalary;
		double initialSalary;
		float perfRating;
		
	public:
		Employee() : employeeSalary(1500) {}
		
		void inputDetails()
		{
			initialSalary = employeeSalary;
			cout << "Input employee name: ";
			cin >> employeeName;
			cout << "Input employee ID: ";
			while(!(cin >> employeeID) || employeeID < 1)
			{
				cin.clear();
				cin.ignore(80, '\n');
				cout << "Input employee ID: ";
			}
			cout << "Input performance rating (1, 1.2, 1.3, 1.4, 1.5): ";
			while(!(cin >> perfRating) || perfRating < 1.0f || perfRating > 1.5f)
			{
				cin.clear();
				cin.ignore(80, '\n');
				cout << "Input performance rating (1, 1.2, 1.3, 1.4, 1.5): ";
			}
			if (perfRating == 1.2f)
			{
				employeeSalary += 300;
			}
			else if (perfRating == 1.3f)
			{
				employeeSalary += 450;
			}
			else if (perfRating == 1.4f)
			{
				employeeSalary += 600;
			}
			else if (perfRating == 1.5f)
			{
				employeeSalary += 750;
			}
		}
		
		void showDetails()
		{
			cout << "\nInitial employee salary: " << initialSalary << endl;
			cout << "Updated employee salary: " << employeeSalary << endl;
		}
};

int main()
{
	Employee e;
	e.inputDetails();
	e.showDetails();
}
