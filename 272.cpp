#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	bool judge = true;
	while (getline(cin,input))
	{	
		int len = input.length();
		for (int i = 0; i < len; i++)
		{
			if (input[i] == '"')
			{
				if (judge == true)
				{
					cout << "``";
					judge = false;
				}
				else
				{
					cout << "''";
					judge = true;
				}
			}
			else
				cout << input[i];
		}
		cout << endl;
	}
	return 0;
}