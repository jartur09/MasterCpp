// p92.cpp  Overloading Unary Operators

#include <iostream.h>
#include <conio.h>

class Counter                   // The class name
{
    private:                    // Private: not access outside

        unsigned int count;

    public:                     // Public: access outside

        Counter (int c)         // The constructor
        {
            count = c;
        }

        int getCounter ()       // Get the counter
        {
            return count;
        }

        Counter operator ++()   // overloaded the opeator ++
        {
            count++;
            return Counter (count);
        }
};

int main()                          // Main program
{
    Counter c1 (0), c2 (0);         // define 2 objects

    cout << "\nc1 = " << c1.getCounter();
    cout << "\nc2 = " << c2.getCounter();

    ++c1;
    ++c2;
    ++c2;

    cout << "\nc1 = " << c1.getCounter();
    cout << "\nc2 = " << c2.getCounter();

    getch();
}
