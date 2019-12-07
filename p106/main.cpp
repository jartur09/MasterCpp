// p106.cpp Multiple Inheritance

#include <iostream.h>
#include <conio.h>

class employee      // base class
{
    private:
        char name [80];
        unsigned long num;

    public:
        void in ()
        {
            cout << "\nName: ";
            cin >> name;
            cout << "Number: ";
            cin >> num;
        }
        void out ()
        {
            cout << "\nName: " << name;
            cout << "\nNumber: " << num;
        }
};

class student       // base class
{
    private:
        char school [80];
        char degree [80];

    public:
        void in ()
        {
            cout << "\nSchool: ";
            cin >> school;
            cout << "Degree: ";
            cin >> degree;
        }
        void out ()
        {
            cout << "\nSchool: " << school;
            cout << "\nDegree: " << degree;
        }
};

class manager : private employee, private student   // derived class
{
    private:
        char title [80];
        double dues;

    public:
        void in ()
        {
            cout << "\n\n*** Manager ***";
            employee::in();     // invoke the member functiion of the base class
            cout << "\Title: ";
            cin >> title;
            cout << "Dues: ";
            cin >> dues;
            student::in();
        }
        void out ()
        {
            cout << "\n\n*** Manager ***";
            employee::out();
            cout << "\nTitle: " << title;
            cout << "\nDues: " << dues;
            student::out();
        }
};

int main()
{
    manager m;

    m.in();
    m.out();

    return 0;
}
