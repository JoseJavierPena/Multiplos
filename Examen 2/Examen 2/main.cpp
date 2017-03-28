#include <iostream>

//1. Si listamos todos los # naturales que son multiplos de 3 o 5, obtenemos 3,5,6 y 9. La suma
// de esos multiplos es 23.
//Encuentre la suma de todos los multiplos de 3 o 5 por debajo de 1000 (233168).

using namespace std;

int main()
{
	unsigned k; 
	unsigned sum;

	k = 999 / 3;
	sum = 3 * k*(k + 1) / 2;

	k = 999 / 5;
	sum += 5 * k*(k + 1) / 2;

	k = 999 / 15;
	sum -= 15 * k*(k + 1) / 2;

	cout << sum << endl;

	return 0;
}