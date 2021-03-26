#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	string str;
	//cin >> str;
	getline(cin, str);//ะ่าช #include<string>
	stack<char> sq;
	int i = 0;
	for (i = 0; i < str.length() / 2; i++)
	{
		sq.push(str[i]);
	}
	if (str.length() % 2 == 1)
	{
		i++;
	}
	//int flag = 0;
	for (; i < str.length(); i++)
	{
		if (sq.top() == str[i])
		{
			sq.pop();
		}
		else
		{
			break;
		}
	}
	if (sq.empty() == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}