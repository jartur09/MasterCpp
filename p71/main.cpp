// p71.cpp A simple clas
// Integrating Data and Functions is the central idea of OOP

#include <iostream>
#include <conio.h>

using namespace std;

class smallobj          		// the class name
{
	private:                	// Bot access outside
		int somedata;       	// data item: encapsulated or hiding (to protect)
	public:						// Yes access outside
		void setdata (int d)	// Member function: setdata
		{
			somedata = d;
		}
		void showdata ()		// Member function: showdata
		{
			cout << "\nData is " << somedata;
		}
};

int main()
{
	smallobj s1, s2;

	s1.setdata (1066);
	s2.setdata (1867);

	s1.showdata();
	s2.showdata();

	getch();

    return 0;
}
