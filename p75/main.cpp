// p75.cpp  Returning Objects from Functions

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
        }

        Distance (int ft, float in)
        {
            feet = ft;
            inches = in;
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

		Distance addDist (Distance d2);
};

Distance Distance::addDist (Distance d2)
{
    Distance temp;

    temp.inches = inches + d2.inches;
    temp.feet = 0;

    if (temp.inches >= 12.0)
    {
        temp.inches -= 12.0;
        temp.feet++;
    }
    temp.feet += (feet + d2.feet);

    return temp;
}

int main()
{
    Distance dist1, dist3;      // without arguments
    Distance dist2 (11,6.25);   // with arguments

    dist1.getdist();

    dist3 = dist1.addDist (dist2);

    dist1.showdist();
    dist2.showdist();
    dist3.showdist();

    return 0;
}
