#include <iostream>
using namespace std;
int main()
{

	double celsius;
	double farenheit;
	cout << "introdu temperatura in grade celsius";
	cin >> celsius;
	farenheit = celsius * 1.8 + 32;
	cout << "temperatura in farenheit este: " << farenheit;

	cin.ignore();
	cin.get();
	return 0;
}