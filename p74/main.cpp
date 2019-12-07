// p74.cpp  Object as Function Arguments

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

        void getdist()
        {
            cout << "\nFeet: ";
            cin >> feet;
            cout << "Inches: ";
            cin >> inches;
        }

        void showdist()
        {
            cout << feet << "-" << inches << '\"' << "\n";
        }
		
		void addDist (Distance d2, Distance d3); // Declared inside and defined outside
};

void Distance::addDist (Distance d2, Distance d3)
{
    inches = d2.inches + d3.inches;
    feet = 0;
    if (inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    feet += (d2.feet + d3.feet);
}
		
int main()
{
    Distance dist1, dist3;      // without arguments
    Distance dist2 (11,6.25);   // with arguments

    dist1.getdist();

    dist3.addDist (dist1, dist2);

    dist1.showdist();
    dist2.showdist();
    dist3.showdist();

    return 0;
}
