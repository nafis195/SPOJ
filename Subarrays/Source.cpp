// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// SPOJ - ARRAYSUB - subarrays
// Problem Statement - https://www.spoj.com/problems/ARRAYSUB/
// Main.cpp


#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector <int> answer;
	int arraySize, startIdx, endIdx, k;

	cin >> arraySize;
	int inputArray[arraySize];

	for (int i = 0; i < arraySize; i++)
		cin >> inputArray[i];

	cin >> k;

	startIdx = 0;
	endIdx = k;

	while (endIdx <= arraySize)
	{
		int* temp;
		temp = max_element(inputArray + startIdx, inputArray + endIdx);
		answer.push_back(*temp);
		startIdx++;
		endIdx++;
	}

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << ' ';

	return 0;
}