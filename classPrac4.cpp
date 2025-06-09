#include <iostream>

class myClass
{
    private:
        int myNumber;
    public:
        myClass() : myNumber(myNumber) {}
        
        void enterDetails()
        {
            std::cout << "Enter number: ";
            std::cin >> myNumber;
        }
        
        void displayDetails()
        {
            std::cout << "My number: " << myNumber << std::endl;
        }
    
};

int main()
{
    myClass mc;
    mc.enterDetails();
    mc.displayDetails();
    
}
