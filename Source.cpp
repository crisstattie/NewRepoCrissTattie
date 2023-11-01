// 3 numere reale strict pozitive (a,b,c > 0)
// sa se verif daca pot fi laturile unui triunghi
// a+b>c, a+c>b, b+c>a

// daca da, de care triunghi (isoscel, echilat, dreptunghic, oarecare)
// calculati aria si perimetrul
// p1 - decl variabile, p2 citire variabile, p3 - verif a,b,c > 0, verif 3 conditii (y - msg; n - msg)


#include <iostream>
using namespace std;
int main()
{
	float a, b, c;

		cout << "introdu lungimea laturii a ";
		cin >> a;

		cout << "introdu lungimea laturii b "; 
		cin >> b;

		cout << "introdu lungimea laturii c ";
		cin >> c;

		if (a > 0 && b > 0 && c > 0);
			if (a + b > c && a + c > b && b + c > a);
			{
				cout << "este un triunghi";


			}
	
			else cout << "nu este un triunghi";
		else cout << "nu numerele nu sunt strict pozitive" << endl;

	cin.ignore();
	cin.get();
	return 0:
}


