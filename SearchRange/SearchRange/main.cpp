//Given a sorted array of integers, find the starting and ending position of a given target value.
//Your algorithm’s runtime complexity must be in the order of O(log n).
//If the target is not found in the array, return[-1, -1]

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &A, int left, int right, int b, bool searchFirst)
{
	int index = 0;
	int middle; //= (left + right) / 2;
	//cout << "Left, right: " << left << "; "<<right<< endl;
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (A[middle] == b)
		{
			index = middle;
			if (searchFirst)
			{
				right = middle - 1;
			}
			else
			{
				left = middle + 1;
			}
		}
		else
		{
			if (b < A[middle])
			{
				right = middle - 1;
			}
			else
			{
				left = middle + 1;
			}
		}
		//cout << "Index value: " << index << endl;
	}
	return index;
}
vector<int> searchRange(vector<int> &A, int b) 
{
	vector<int> v;
	int count = 0;
	int left = 0;
	int right = A.size() - 1;
	int middle;// = (left + right) / 2;

	while (left <= right)
	{
		
		middle = (left + right) / 2;
		if (A[middle] == b)
		{
			int b1 = binarySearch(A, middle, right, b, false);
			int b2 = binarySearch(A, left, middle, b, true);
			v.push_back(b2);
			v.push_back(b1);
			return v;
		}
		if (A[middle] > b)
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;
		}
	}
	v.push_back(-1);
	v.push_back(-1);
	return v;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v;

	int term;
	for (int i = 0; i < n; i++)
	{
		cin >> term;
		v.push_back(term);
	}
	int b;
	cin >> b;

	vector<int> v1 = searchRange(v, b);
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << ' ';
	}
	return 0;
}