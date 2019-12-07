// p94.cpp Concatenating Strings

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

        void display ()
        {
            cout << str;
        }

        String operator + (String ss)
        {
            if (strlen(str) + strlen (ss.str) < SZ)
            {
                String tmp;

                strcpy (tmp.str,str);
                strcat (tmp.str, ss.str);
                return tmp;
            }
            else
            {
                cout << "\nOverflow";
            }
        }
};

int main()
{
    String  s1  = "Hello",
            s2 = " World",
            s3;

    s3 = s1 + s2;
    s3.display();

    return 0;
}
