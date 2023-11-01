// se dau 3 numere reale strict pozitive (a,b,c > 0)
// sa se verif daca acestea pot reprezenta laturile unui triunghi
// a+b>c, a+c>b, b+c>a

// daca da, de care triunghi (isoscel, echilat, dreptunghic, oarecare)
// calculati aria si perimetrul
// p1 - decl variabile, p2 citire variabile, p3 - verif a,b,c > 0, verif 3 conditii (y - msg; n - msg)


#include <iostream>
using namespace std;
int main()
{
	float a, b, c;

		cout << "dati cele 3 numere ";
		cin >> a>>b>>c;

		if (a > 0 && b > 0 && c > 0);
			if (a + b > c && a + c > b && b + c > a);
			{
				cout << "avem un triunghi";
				if (a==b&&b==c)
					cout << "echilateral" endl;
				else
					if (a==b||a==c||b==c)
						cout << "isoscel" endl;
					else
						if (a*a==b*b+c*c||b*b==c*c||c*c==a*a+b*b)
							cout << "isoscel" endl;
						else
							cout << "oarecare" endl;
...


	cin.ignore();
	cin.get();
	return 0;
}


