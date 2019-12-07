// p73.cpp  Constructor

#include <iostream.h>
#include <conio.h>

class Counter                   // The class name
{
    private:                    // Private: not access outside

        unsigned int count;

    public:                     // Public: access outside

        Counter ()              // The constructor
        {
            count = 0;
        }

        void incCounter ()
        {
            count++;
        }

        int getCounter ()
        {
            return count;
        }
};

int main()
{
    Counter c1, c2;         // define 2 objects

    cout << "\nc1 = " << c1.getCounter();
    cout << "\nc2 = " << c2.getCounter();

    c1.incCounter();
    c2.incCounter();
    c2.incCounter();

    cout << "\nc1 = " << c1.getCounter();
    cout << "\nc2 = " << c2.getCounter();

    getch();
}
