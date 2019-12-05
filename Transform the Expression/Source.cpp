// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// SPOJ - ONP
// Transform the Expression
// Problem Statement- https://www.spoj.com/problems/ONP/
// Main.cpp


#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;

	stack <string> oprtr;
	stack <string> oprnd;

	string userInput;

	for (int i = 0; i < testCases; i++)
	{
		cin >> userInput;
		string answer;
		for (int i = 0; i < userInput.length(); i++)
		{
			if (userInput[i] == '(')
				continue;
			if (userInput[i] >= 'a' && userInput[i] <= 'z')
			{
				string a;
				a = userInput[i];  // the process here to convert a single character to string before push to the stack
				oprtr.push(a);
			}
			if (userInput[i] == '+' || userInput[i] == '-' || userInput[i] == '*' || userInput[i] == '/' || userInput[i] == '^')
			{
				string a;
				a = userInput[i];  // the process here to convert a single character to string before push to the stack
				oprnd.push(a);
			}
			if (userInput[i] == ')')
			{
				string answer;
				answer = oprtr.top();
				oprtr.pop();
				answer = oprtr.top() + answer;
				oprtr.pop();
				answer = answer + oprnd.top();
				oprnd.pop();
				oprtr.push(answer);
			}
		}
		cout << oprtr.top() << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}