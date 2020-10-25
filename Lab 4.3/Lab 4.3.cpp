#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, F, a, b, c;

	cout << "a=";cin >> a;
	cout << "b=";cin >> b;
	cout << "c=";cin >> c;
	cout << "xp=";cin >> xp;
	cout << "xk=";cin >> xk;
	cout << "dx=";cin >> dx;


	cout << fixed;
	cout << "---------"<<endl;
	cout << "|" << setw(4) << "F" << "   |" << endl;
	cout << "---------" << endl;


	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = a - (x / 10 + b);
		else
			if (x > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = (3 * x) + (2 / c);

		cout << "|" << setw(7) << setprecision(2) << F
			<< "|" << endl;

		x += dx;
	}
	cout << "---------";
	return 0;
}
