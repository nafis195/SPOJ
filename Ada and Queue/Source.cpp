// Bismillahir Rahmanir Rhaim
// Nafis Chowdhury
// SPOJ - ADAQUEUE
// Ada and Queue
// Problem Statement- https://www.spoj.com/problems/ADAQUEUE/
// Main.cpp


#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#include<deque>
using namespace std;

int main()
{
	long int testCases;
	cin >> testCases;

	deque < long int> adaqueue;

	string userInput;
	int input;
	int m;

	for (long int i = 0; i < testCases; i++)
	{
		cin >> userInput;

		if (userInput == "back" && !adaqueue.empty())
		{
			//cout << adaqueue.back() << endl;
			for(m=0;m<adaqueue.size();m++)
			{
				cout << adaqueue.back();
				adaqueue.pop_back();
			}
			
		}
		else if (userInput == "front" && !adaqueue.empty())
		{
			//cout << adaqueue.front() << endl;
			//adaqueue.pop_front();
				for(m=0;m<adaqueue.size();m++)
			{
				cout << adaqueue.front();
				adaqueue.pop_front();
			}
		}
		else if (userInput == "reverse")
		{
			if (adaqueue.size() == 1)  // if there is only one item in the deque, then we don't need to reverse it
				continue;
			else{
				//reverse(adaqueue.begin(), adaqueue.end());  // for reversing the deque
				//int *a;
				//a= new int [adaqueue.size()];
				int *a;
				a=new int[adaqueue.size()];
				int k,c;
				for( k=0;k<adaqueue.size();k++)
				{
				   a[k]=adaqueue.front();
				   adaqueue.pop_front();
					
					
				}
					
       						  
   				 for(int p=0;p<k/2;p++)
				 {
					 a[p]=a[k];
					 k--;
				 }
				for(int x=0;x<adaqueue.size();x++)
				{
					adaqueue.push_front(x);
				}
				
			}
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
	//system("pause");
	return 0;
}
