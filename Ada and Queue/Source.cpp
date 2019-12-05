// Bismillahir Rahmanir Rhaim
// Nafis Chowdhury
// SPOJ - ADAQUEUE
// Ada and Queue
// Problem Statement- https://www.spoj.com/problems/ADAQUEUE/
// Main.cpp


#include<iostream>
#include<algorithm>
#include<queue>
#include<deque>
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;

	deque <int> adaqueue;

	string userInput;
	int input;

	for (int i = 0; i < testCases; i++)
	{
		cin >> userInput;

		if (userInput == "back" && !adaqueue.empty())
		{
			cout << adaqueue.back() << endl;
			adaqueue.pop_back();
		}
		else if (userInput == "front" && !adaqueue.empty())
		{
			cout << adaqueue.front() << endl;
			adaqueue.pop_front();
		}
		else if (userInput == "reverse")
		{
			if (adaqueue.size() == 1)  // if there is only one item in the deque, then we don't need to reverse it
				continue;
			else
				reverse(adaqueue.begin(), adaqueue.end());  // for reversing the deque
		}
		else if (userInput == "push_back")
		{
			cin >> input;
			adaqueue.push_back(input);
		}
		else if (userInput == "toFront")
		{
			cin >> input;
			adaqueue.push_front(input);
		}
		else
		{
			cout << "No job for Ada ?" << endl;
		}
	}

	cout << endl;
	system("pause");
	return 0;
}