/*
Test C++ default queue
*/


#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> newQueue;
	int nInput;

	cout << "Please input some integers: " << endl;

	do
	{
		cin >> nInput;
		newQueue.push(nInput);
	} while(nInput);

	cout << "The queue contains: " << endl;
	while (!newQueue.empty())
	{
		cout << ' ' << newQueue.front();
		newQueue.pop();
	}

	cout << endl;

	return 0;
}