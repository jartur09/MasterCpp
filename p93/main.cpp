// p93.cpp Overloading Binary Operators

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
            inches = 0;
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

        Distance operator + (Distance d2);  // Declared inside and defined outside
};

Distance Distance::operator + (Distance d2) // the overloaded + operator function
{
    int ft = feet + d2.feet;
    float in = inches + d2.inches;

    if (in >= 12.0)
    {
        in -= 12.0;
        ft++;
    }
    return Distance (ft,in);
}

int main()              // main program
{
    Distance dist1, dist3;      // without arguments
    Distance dist2 (11,6.25);   // with arguments

    dist1.getdist();

    dist3 = dist1 + dist2;      // overload operator

    dist1.showdist();
    dist2.showdist();
    dist3.showdist();

    return 0;
}
