// Lab 4.7.cpp
 //  Обухов Вітор
 // Лабораторна робота № 4.7
 // Розгалуження, задане плоскою фігурою.
 // Варіант 7

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;
	const double Pi = 4 * atan(1.0);
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "1/atan(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 0; 
		a = Pi / 2 ;
		S = a;
		do {
			n++;
			R = (pow(-1, n + 1) * pow(x, 2*n+1)) / 2 * n + 1; 
			a *= R;
			S += a;
		} while (a >= eps);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << 1 / atan(x) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"

			<< endl;

		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}