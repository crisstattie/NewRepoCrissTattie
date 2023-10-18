//se dau temp in 2 zile (ieri si azi)
//se va compara azi fata de ieri

#include <iostream>
using namespace std;
int main()
{
	int azi, ieri;

	cout << "introdu temperatura de azi ";
	cin >> azi;

	cout << "introdu temperatura de ieri ";
	cin >> ieri;

	//if (ieri <= azi)
	//	if (ieri < azi)
	//		cout << "azi a fost mai cald ca ieri";
	//	else
	//		cout << "azi a fost la fel de cald ca ieri";
	//else
	//	cout << "azi a fost mai frig ca ieri";

	if (ieri < azi)
			cout << "azi a fost mai cald ca ieri";
	else
		if (ieri > azi)
			cout << "azi a fost mai frig ca ieri";
	else
		cout << "azi a fost la fel de cald ca ieri ";

	cin.ignore();
	cin.get();
	return 0;
}