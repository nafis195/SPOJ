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
	 int testCases;
	cin >> testCases;

	deque < int> adaqueue;

	string userInput;
	 int input;
	 int m;
	 int s;

	for ( int i = 0; i < testCases; i++)
	{
		cin >> userInput;
		s=adaqueue.size();

		if (userInput == "back")
		{
			//cout << adaqueue.back() << endl;
			if(adaqueue.empty())
			{
				cout << "No job for Ada ?" << endl;
			}
			else{
			
			for(m=0;m<s;m++)
			{
				cout << adaqueue.back();
				cout <<" ";
				adaqueue.pop_back();
			}
			}
		}
		else if (userInput == "front")
		{
			
			if(adaqueue.empty())
			{
				cout << "No job for Ada ?" << endl;
			}
			else{
			
				for(m=0;m<s;m++)
			{
				cout << adaqueue.front();
				adaqueue.pop_front();
			}
		}
		}
		else if (userInput == "reverse")
		{
			if (adaqueue.size() == 1 || adaqueue.size()==0 )  // if there is only one item in the deque, then we don't need to reverse it
				continue;
			else{
			
				int *a;
				
				 int k,c;
				s=adaqueue.size();
				a=new int[s];
				for( k=0;k<s;k++)
				{
				   a[k]=adaqueue.front();
				   adaqueue.pop_front();
					
					
				}
					
       			k=k-1;
				int temp;			  
   				 for( int p=0;p<=(s/2);p++)
				 {
					 
					 temp=a[k];
					 a[k]=a[p];
					 a[p]=temp;
					 k--;
				 }
				for(int x=0;x<s;x++)
				{
					adaqueue.push_back(a[x]);
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
	
	}

	return 0;
}
