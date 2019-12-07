// p95.cpp Comparision Operators

#include <iostream.h>
#include <conio.h>
#include <string.h>

const int SZ = 100;

class String            // the class name
{
    private:            // Private: not access outside

        char str [SZ];  // The String

    public:            // Public: access outside

        String ()       // the constructor
        {
            str [0] = '\0';    // empty String
        }

        String (char s [])
        {
            strcpy (str, s);
        }

        void getstr ()
        {
            cin.get (str, SZ);
        }

        void display ()
        {
            cout << str;
        }

        boolean operator == (String ss)
        {
            return (strcmp (str,ss.str) == 0) ? true : false;
        }
};

int main()
{
    String  s1,
            s2 = "yes";

    cout << "\nEnter yes/no : ";

    s1.getstr();

    if (s2 == s1)
    {
        cout << "You typed yes";
    }
    else
    {
        cout << "You typed no";
    }

    return 0;
}
