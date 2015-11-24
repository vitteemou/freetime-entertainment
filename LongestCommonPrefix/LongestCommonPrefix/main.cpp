#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestCommonPrefix(vector<string> &A) {

	int n = A.size();
	int minLen = A[0].length();
	for (int i = 0; i < n; i++)
	{
		if (A[i].length() < minLen)
		{
			minLen = A[i].length();
		}
	}

	string subStr = "";
	int j = 0;
	while (j < minLen)
	{
		char bufChar = A[0][j];
		int count = 1;
		int k = 1;
		while (k < n)
		{
			if (A[k][j] == bufChar)
			{
				count++;
			}
			k++;
		}
		if (count == n)
		{
			subStr += bufChar;
		}
		else
		{
			return subStr;
		}
		j++;
	}
	return subStr;
}

int main()
{
	int n;
	cin >> n;
	vector<string> v;

	string term;
	for (int i = 0; i < n; i++)
	{
		cin >> term;
		v.push_back(term);
	}
	cout << longestCommonPrefix(v);
	return 0;
}