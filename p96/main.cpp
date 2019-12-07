// p96.cpp Arithmetic Assigment Operators

#include <iostream.h>
#include <conio.h>

class Distance          // tha class name
{
    private:            // Private: not access outside

        int feet;
        float inches;

    public:             // Public: access outside

        Distance ()     // Overloaded constructor
        {
            feet = 0;
            inches = 0.0;
        }

        Distance (int f, float i)
        {
            feet = f;
            inches = i;
        }

        void getdist()      // Get Distance
        {
            cout << "\nFeet: ";
            cin >> feet;
            cout << "Inches: ";
            cin >> inches;
        }

        void showdist()     // Show Distance
        {
            cout << feet << "-" << inches << '\"' << "\n";
        }

        void operator += (Distance d2);  // Declared inside and defined outside
};

void Distance::operator += (Distance d2) // the overloaded += operator function
{
    feet += d2.feet;
    inches += d2.inches;

    if (inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
}

int main()              // main program
{
    Distance dist1;             // without arguments
    Distance dist2 (11,6.25);   // with arguments

    dist1.getdist();

    dist1 += dist2;      // overload operator

    dist2.showdist();
    dist1.showdist();

    return 0;
}
