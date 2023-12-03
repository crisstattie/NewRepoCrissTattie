//avem o secventa de numere(intr - un vector / array), vrem:
//1. sa contorizam aparitiile fiecarui numar
//2. sa aflu care - i numarul cu cele mai multe aparitii
//(sursa include suplimentar cateva artificii, pentru optimizare)

#include <iostream>
using namespace std;

int main()
{
	int v[20] = { 4,-3,5,7,-3,6,5,7,5,-3 }, ap[20], n, i, j;

	n = 10;

	//cout << "cate numere introduceti? ";
	//cin >> n;
	//cout << "introduceti numerele" << endl;
	//for (i = 0;i <= n - 1;i++)
	//	cin >> v[i];

	cout << "numerele" << endl;
	for (i = 0;i < n;i++)
		cout << v[i] << "\t";
	cout << endl;

	//int imax = 0;
	//for (i = 0;i < n;i++)
	//{
	//	ap[i] = 0;
	//	for (j = 0;j < n;j++)
	//		if (v[i] == v[j])
	//			ap[i]++;
	//	cout << ap[i] << "\t";

	//	if (ap[i] > ap[imax])
	//		imax = i;
	//}
	//cout << endl;

	for (i = 0;i < n;i++)
		ap[i] = 1;

	int imax = 0;
	for (i = 0;i < n;i++)
	{
		if (ap[i] != 0)
		{
			ap[i] = 1;
			for (j = i + 1;j < n;j++)
				if (v[i] == v[j])
				{
					ap[i]++;
					ap[j] = 0;
				}
		}

		cout << ap[i] << "\t";
		if (ap[i] > ap[imax])
			imax = i;
	}

	//cout << "elementul cu cele mai multe aparitii (" << ap[imax]
	//	<< ") este " << v[imax] << endl;

	cout << endl << "elementele cu cele mai multe aparitii (" << ap[imax]
		<< ") sunt ";
	for (i = 0;i < n;i++)
		if (ap[i] == ap[imax])
			cout << v[i] << " ";
	cout << endl;

	cin.ignore();
	cin.get();
	return 0;

}