// p97.cpp Data conversion : Object and Basic Types

#include <iostream.h>
#include <conio.h>

const float MTF = 3.280833;

class Distance          // tha class name
{
    private:            // Private: not access outside

        int feet;
        float inches;

    public:             // Public: access outside

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

        operator float ()
        {
            float fractfeet = inches /12;
            fractfeet += float (feet);
            return fractfeet/MTF;
        }

        void show()     // Show Distance
        {
            cout << feet << "-" << inches << '\"' << "\n";
        }
};

int main()
{
    float mts;
    Distance dist1 = 2.35;

    mts = float (dist1);    // Conversion Explicit
    dist1.show();
    cout << "\nmts = " << mts;

    dist1 = 1.0;
    mts = dist1;            // Conversion Implicit

    dist1.show();
    cout << "\nmts = " << mts;

    return 0;
}
