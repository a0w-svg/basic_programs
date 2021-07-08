#include <iostream>

using namespace std;

int fibonacci(int num);
int main()
{
	cout << "Fibbonacci\n";
	int num, i = 0;
	cout << "Type any number: ";
	cin >> num;
	while (i <= num)
	{
		cout << " " << fibonacci(i);
		i++;
	}
	return 0;
}

int fibonacci(int num)
{
	if (num == 0 || num == 1) return num;
	else
		return ((fibonacci(num - 1) + fibonacci(num - 2)));
}
