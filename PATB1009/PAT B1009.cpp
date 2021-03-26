#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	while (str.empty() != true)
	{
		int start=str.rfind(' ');
		if (start == string::npos)
		{
			start = 0;
			for (int i = start; i < str.length(); i++)
			{
				cout << str[i];
			}
		}
		else
		{
			for (int i = start + 1; i < str.length(); i++)
			{
				cout << str[i];
			}
			cout << ' ';
		}
		str.erase(start, str.length());
	}
	return 0;
}