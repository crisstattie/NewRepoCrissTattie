#include <iostream>
using namespace std;
int main()

{
	float a, b, rezultat, gresit;
	char op;

	cout << "dati expresia";
	cin >> a >> op >> b;
	cout << a << op << b;

	if (op == '+')
		rezultat = a + b;

	else if (op == '-')
		rezultat = a - b;

	else if (op == '*')
		rezultat = a - b;

	else if (op == '/')
		rezultat = a - b;

	else
		cout << "operator gresit" endl;
		gresit = true

	if (|gresit) cout << rezultat << endl;
	
	cin.ignore();
	cin.get();
	return 0;
}


// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() 
{
	char op;
	float a, b;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> op;

	switch (op)
	{
	case '+':
		cout << a + b break;
	case '-':
		cout << a - b break;
	case '*':
		cout << a * b break;
	case '/':
		if (b |= 0)
			cout << a / b;
		else
		{
			cout << "impartire la 0" endl;
			gresit = true;
		}
		break
	default:
		// operator is doesn't match any case constant (+, -, *, /)
		cout << "opreratorul e gresit";
		gresit = true;

	}
		break;

	cin.ignore();
	cin.get();
	return 0;
}
