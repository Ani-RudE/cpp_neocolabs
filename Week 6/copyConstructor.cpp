// C++ program to demonstrate the working
// of a COPY CONSTRUCTOR
#include <iostream>
using namespace std;

class Copy {
private:
	int x, y;

public:
	Copy(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	// Copy constructor
	Copy(const Copy& p1)
	{
		x = p1.x;
		y = p1.y;
	}

	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	Copy p1(10, 15); // Normal constructor is called here
	Copy p2 = p1; // Copy constructor is called here

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX()
		<< ", p2.y = " << p2.getY();
	return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1034327250721574912/unknown.png