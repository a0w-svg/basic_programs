#include <iostream>
#include <string>

using namespace std;

int main()
{
	int option = 0;
	string text;
	cout << "Program to convert a string in lowercases and uppercase\n";
	while (true)
	{
		cout << "1.Convert a string in lower case\n";
		cout << "2.Convert a string in upper case\n";
		cout << "3.Exit program\n";
		cout << "your option: ";
		cin >> option;
		if (option == 1)
		{
			cout << "Type the text: ";
			cin >> text;
			for (int i = 0; i < text.length(); i++)
				text[i] = tolower(text[i]);
			cout << "Lower case is: " << text << endl;
			continue;
		}
		else if (option == 2)
		{
			cout << "Type the text: ";
			cin >> text;
			for (int i = 0; i < text.length(); i++)
				text[i] = toupper(text[i]);
			cout << "Upper case is: " << text << endl;
			continue;
		}
		else if (option == 3) break;
		else
			cout << "wrong option\n";
	}
	return 0;
}