#include <iostream>

using namespace std;
int num = 0;
int main()
{
	cout << "Program to calculate the avarage\n";
	unsigned int option;
	while (true)
	{
		cout << "1.Calculate the avarage temperature of the selected number of days\n";
		cout << "2.Exit program\n";
		cout << "Type your option: ";
		cin >> option;
		if (option == 1)
		{
			
			cout << "Type number of days: ";
			cin >> num;
			float sum = 0, average = 0;
			float* arr = new float[num];
			for (int i = 0; i < num; i++)
			{
				cout << "enter " << i << " temperature value: ";
				cin >> arr[i];
				sum += arr[i];
			}
			average = sum / (float)num;
			cout << "The average tempeerature is: " << average << endl;
			continue;
		}
		if (option == 2) break;
		else
		{
			cout << "wrong option\n";
		}
	}
	return 0;
}