#include <iostream>
using namespace std;
int main()
{
	int n, contor=0, copie;
		cout << "dati un numar" << endl;
		cin >> n;
		copie = n;

		while (n != 0)
	{
		n = n / 10;
		contor = contor + 1;
	}
		
		cout << "numarul " << copie << " are " << contor << " cifre" << endl;
		
		n = copie;
		int cifra, ciframax = 0;
		
		while (n != 0)
	{
			cifra = n % 10;
			if (cifra > ciframax)
				ciframax = cifra;
			n = n / 10;
				
	}
			cout << "cifra maxima e " << ciframax << endl;
	

	cin.ignore();
	cin.get();
	return 0;
}