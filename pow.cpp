#include <iostream>

using namespace std;

double pow(double x, int y) 
{
 // To be implemented by you
}

int main() 
{
	cout << "To calculate x^y ..." << endl;
	
	double x;
	int y;
	cout << "Please enter x: ";
	cin >> x;
	cout << "Please enter y: ";
	cin >> y;
	
	if(x == 0) {
		if (y > 0)
			cout << 0 << endl;
		else
			cout << "x^y is not defined" <<endl;
	}
	else
		cout << pow(x,y) << endl;
		
		
	return 0;
}

