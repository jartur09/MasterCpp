// p72.cpp distance class

#include <iostream.h>
#include <conio.h>

class Distance          		// the class name
{
	private:                	// Private: access outside

		int feet;
		float inches;

	public:						// Public: access outside

		void setdist (int ft, float in)	// Set Distance
		{
			feet = ft;
			inches = in;
		}

		void getdist ()					// Get Distance
		{
			cout << "\nFeet: ";
			cin >> feet;
			cout << "Inches: ";
			cin >> inches;
		}

		void showdist ()				// Show Distance
		{
			cout << feet << "-" << inches << '\"' << "\n";
		}
};

int main()						// Main programa
{
	Distance d1, d2;

	d1.setdist(11,6.25);
	d2.getdist();

	d1.showdist();
	d2.showdist();

	getch();
}
