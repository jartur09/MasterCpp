// Author: JAC
// p104.cpp Class Hierarchies

#include <iostream.h>
#include <conio.h>

class employee      // base class
{
    private:
        char name [80];
        unsigned long num;
    public:
        void in ()  // Get data
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

class manager : public employee     // derived class
{
    private:
        char title [80];
        double dues;
    public:
        void in ()
        {
            cout << "\n\n*** Manager ***";
            employee::in(); // invoke the member function of the base class
            cout << "Title: ";
            cin >> title;
            cout << "Dues: ";
            cin >> dues;
        }
        void out ()
        {
            cout << "\n\n*** Manager ***";
            employee::out(); // invoke the member function of the base class
            cout << endl << "Title: " << title;
            cout << endl << "Dues: " << dues;
        }
};

class scientist : public employee     // derived class
{
    private:
        int pubs;
    public:
        void in ()
        {
            cout << "\n\n*** Scientist ***";
            employee::in(); // invoke the member function of the base class
            cout << "Pubs: ";
            cin >> pubs;
        }
        void out ()
        {
            cout << "\n\n*** Scientist ***";
            employee::out(); // invoke the member function of the base class
            cout << endl << "Pubs: " << pubs;
        }
};

class worker : public employee  // derived class
{
};

int main()      // Main program
{
    manager m;
    scientist s;
    worker w;

    m.in();
    s.in();
    cout << "\n\n";
    w.in();

    m.out();
    s.out();
    cout << "\n\n";
    w.out();

    return 0;
}
