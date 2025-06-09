#include <iostream>

using namespace std;

class counter
{
    private:
        int count;
    public:
        counter() : count(0) {
            cout << "\nExecuting Constructor!";
        }
        
        void inc_count()
        {
            count += 1;
        }
        
        int get_count()
        {
            return count;
        }
};

int main()
{
    counter c1, c2;
}
