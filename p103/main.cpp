// p103.cpp Inheritance in the English Distance class

#include <iostream.h>
#include <conio.h>

const float MTF = 3.280833;

enum posneg
{
    pos,
    neg
};

class Distance          // the class name
{
    private:            // Private: not access outside

        int feet;
        float inches;

    public:             // Public: access outside

        Distance ()
        {
        }

        Distance (float meters)     // Convert Float to Distance
        {
            float fltfeet = MTF * meters;
            feet = (int) (fltfeet);
            inches = 12 * (fltfeet - feet);
        }

        Distance (int f, float i)
        {
            feet = f;
            inches = i;
        }

        operator float ()   // Convert Distance to Float
        {
            float fractfeet = inches /12;
            fractfeet += float (feet);
            return fractfeet/MTF;
        }

        void showDist()     // Show Distance
        {
            cout << feet << "-" << inches << '\"' << "\n";
        }
};

class DSign : public Distance
{
    private:
        posneg sign;    // this data members, allows us to work with negative English Distance variable
    public:
        DSign () : Distance()
        {
            sign = pos;
        }
        DSign (int f, float i, posneg s = pos) : Distance (f,i)
        {
            sign = s;
        }
        void showDist()     // Show Distance
        {
            cout << "\n" << ((sign == pos) ? "+" : "-");
            Distance::showDist();
        }
};

int main()
{
    DSign val;
    DSign num (11,6.25);
    num.showDist();
    return 0;
}
