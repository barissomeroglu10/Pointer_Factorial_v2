/*
In this code, we calculate factoriaL for entered number by user. Than we check zero digits quantity for number.

Developer = Barış Someroğlu
Date = 28.04.2024 - 04:20 pm
*/

#include <iostream>
#include <string>

using namespace std;

// Function prototype
int PointerFactorial(int*);
void ZeroDigits(int*);

int main()
{
	int Number, FactorialResult = 0;

	cout << "Please enter a number = ";
	cin >> Number;

	FactorialResult = PointerFactorial(&Number); // Call function

	cout << "\nFactorial result for the number = " << FactorialResult << endl;

	ZeroDigits(&FactorialResult); // Call function

	return 0;
}

// Function definition
int PointerFactorial(int* ptrNumber)
{
	if (*ptrNumber < 0)
		return -1;

	else if (*ptrNumber <= 1)
		return 1;
	
	else
	{
		int NextValue = *ptrNumber - 1;

		return *ptrNumber * PointerFactorial(&NextValue);
	}
}

// Function definition
void ZeroDigits(int* ptrZeroDigits)
{
	int Counter = 0;

	while (*ptrZeroDigits % 10 == 0)
	{
		Counter++;

		*ptrZeroDigits = *ptrZeroDigits / 10;
	}

	cout << "\nZero digits quantity = " << Counter << endl;
}
