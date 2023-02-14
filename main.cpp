#include <iostream>

using namespace std;

double raisePower(int toRaise, int power)
{
	double result = 1;
	bool isNegative = false;
	if(power != 0)
	{
		result = toRaise;
	}
	if(power < 0)
	{
		power = power * -1;
		isNegative = true;
	}
	for(int i = 0; i < power; i++)
	{
		result = result * toRaise;
	}
	if(isNegative)
	{
		result = 1/result;
	}
	return result;
}


int main()
{
	cout << "Choose a number to work with." << endl;
	int toRaise;
	cin >> toRaise;
	cout << "Choose a power to raise the number to." << endl;
	int power;
	cin >> power;
	int result = raisePower(toRaise, power);

	cout << toRaise << "^" << power << " = " << result << endl;
	return 0;
}
