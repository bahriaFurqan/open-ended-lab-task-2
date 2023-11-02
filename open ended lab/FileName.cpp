#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int option, number;
	cout << "Press 1 to check if a specific number is a prime number .\n";
	cout << "Press 2  to find prime numbers in a given range.\n";
	cout << "Option = ";
	cin >> option;

	if (option == 1)
	{
		cout << "Enter the number you want to check : ";
		cin >> number;
		if (number <= 1)
		{
			cout << "the number is not a prime number : ";
		}
		else
		{
			bool prime = true;
			for (int i = 2; i <= number; i++)
			{
				if (number % 2 == 0 || number % 3 == 0)
					prime = false;
				break;
			}
			if (prime)
				cout << "the number is prime ";
			else
				cout << "The number is not prime\n";
		}
	}
	else if (option == 2)
	{
		int min, max;
		int count = 0, found = 0;
		cout << "Enter the minimum number:";
		cin >> min;
		cout << "Enter the maximum number:";
		cin >> max;

		for (int i = min; i <= max; i++)
		{
			for (int j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
					count++;
			}
			if (count == 0 && i != 1)
			{
				found++;
				cout << i << endl;
				count = 0;
			}
			count = 0;

		}
	}
	system("pause");
	return 0;
}