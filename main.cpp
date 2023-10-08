#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n, i;
	//---------------------------------------------------------
	//1) while (…) { … while (…) { … } … };
	P = 0;
	n = 1;
	while (n <= 20)

	{
		S = 0;
		i = 1;
		while (i <= n)
		{
			S += cos(i + n);
			i++;
		}
		P += sqrt(pow(sin(n), 2) + abs(S));
		n++;

	}
	cout << P << endl;
	//---------------------------------------------------------
	//2) do { … do { … } while (…) … } while (…);
	P = 0;
	n = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{
			S += cos(i + n);
			i++;
		} while (i <= n);
		P += sqrt(pow(sin(n), 2) + abs(S));
		n++;
	} while (n <= 20);
	cout << P << endl;
	//---------------------------------------------------------
	//3) for(…; …; n++) {… for(…; …; k++) {…} …};
	P = 0;
	n = 1;
	for (n = 1; n <= 20; n++)
	{
		S = 0;
		i = 1;
		for (i = 1; i <= n; i++)
		{
			S += cos(i + n);
		}
		P += sqrt(pow(sin(n), 2) + abs(S));
	}
	cout << P << endl;
	//---------------------------------------------------------
	//4) for(…; …; n--) {… for(…; …; k--) {…} …};

	P = 0;
	n = 1;
	for (n = 20; n >= 1; n--)
	{
		S = 0;
		i = 1;
		for (i = n; i >= 1 ; i--)
		{
			S += cos(i + n);
		}
		P += sqrt(pow(sin(n), 2) + abs(S));

	}
	cout << P << endl;

		return 0;
}