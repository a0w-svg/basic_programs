#include <iostream>

using namespace std;
int main()
{
	cout << "\t\tProgram to check Triangle" << endl;
	char option = 0;
	while (true)
	{
		cout << "1.Check triangle\n";
		cout << "2.Exit\n";
		cout << "Type your option: ";
		cin >> option;
		if (option == '1')
		{
			float angleA, angleB, angleC;

			cout << "Enter the angles of triangle" << endl;
			cout << "Enter Angle A: ";
			cin >> angleA;
			cout << "Enter Angle B: ";
			cin >> angleB;
			cout << "Enter Angle C: ";
			cin >> angleC;
			if (angleA + angleB + angleC == 180)
			{
				cout << "Triangle is valid\n" << endl;
			}
			else
			{
				cout << "Triangle is invalid\n" << endl;
			}
			continue;
		}
		if (option == '2') break;
		else
		{
			cout << "wrong option\n\n";
		}
	}
	return 0;
}