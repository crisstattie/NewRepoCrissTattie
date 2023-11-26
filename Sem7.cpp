////input: numere
////output: max, nrmax = numar de aparitii max
//// sa se gaseasca valoarea cu nr maxim de aparitii
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, x, max, nrmax, i;
//	cout << "cate numere vreti sa introduceti?";
//	cin >> n;
//
//	cout << "dati valorile" << endl;
//	for (i = 1;i <= n;i++)
//	{
//		cin >> x;
//		if (i == 1)//prima iteratie
//		{
//			max = x;
//			nrmax = 1;// contorul incepe sa numere
//		}
//		else // incepand cu a doua iteratie
//			if (x > max)
//			{
//				max = x;
//				nrmax = 1;
//			}
//				
//			else if (x == max)
//				nrmax++;
//	}
//
//	cout << "valoarea maxima este" << max
//		<< "si apare de " << nrmax << "ori" << endl;
//
//
//	cin.ignore();
//	cin.get();
//	return 0;
//}


////cu vectori
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, x, max, nrmax, i;
//	int v[20];
//	cout << "cate numere vreti sa introduceti?";
//	cin >> n;
//
//	cout << "dati valorile" << endl;
//	for (i = 1;i <= n;i++)
//	{
//		cin >> v[i];
//		if (i == 1)//prima iteratie
//		{
//			max = v[i];
//			nrmax = 1;// contorul incepe sa numere
//		}
//		else // incepand cu a doua iteratie
//			if (v[i] > max)
//			{
//				max = v[i];
//				nrmax = 1;
//			}
//
//			else if (v[i] == max)
//				nrmax++;
//	}
//	cout << "s-au introdus numerele: ";
//	for (i = 1;i <= n;i++)
//		cout << v[i] << "";
//
//	cout << "valoarea maxima este" << max
//		<< "si apare de " << nrmax << "ori" << endl;
//
//
//	cin.ignore();
//	cin.get();
//	return 0;
//}


//cu vectori
#include <iostream>
using namespace std;
int main()
{
	int n,  i;
	int v[20], ap[20];

	cout << "cate numere vreti sa introduceti?";
	cin >> n;

	cout << "dati valorile" << endl;
	for (i = 0;i <= n - 1;i++)
		cin >> v[i];

	cout << "s-au introdus numerele: ";
	for (i = 0;i <= n-1;i++)
		cout << v[i] << "\t";

	cout << endl<< "care apar de:           ";
	for (i = 0;i <= n - 1;i++)
	
	{
		ap[i] = 0;
		for (int j = 0; j <= n - 1; j++)
			if (v[i] == v[j])
				ap[i]++;
		cout << ap[i] << "\t";
	}

	cin.ignore();
	cin.get();
	return 0;
}