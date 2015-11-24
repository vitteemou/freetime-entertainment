//Find the kth smallest element in an unsorted array of non-negative integers.
#include<iostream>
#include<vector>
using namespace std;

int kth_smallest(vector<int> &v, int k) {

	int n = v.size();
	int absMin = v[0];
	int absMax = v[0];
	for (int i = 1; i < n; i++)
	{
		if (v[i] > absMax)
		{
			absMax = v[i];
		}
		if (v[i] < absMin)
		{
			absMin = v[i];
		}
	}
	if (k == 1)
	{
		return absMin;
	}

	int start = absMin;
	int end = absMax;
	while (start < end)
	{
		int mid = (start + end) / 2;
		int countLowers = 0;
		int countMids = 0;

		for (int i = 0; i < n; i++)
		{
			if (v[i] < mid)
			{
				countLowers++;
			}
			if (v[i] == mid)
			{
				countMids++;
			}
		}
		if (countMids > 0)
		{
			if (countLowers == k - 1)
			{
				return mid;
			}
			if ((countLowers < k - 1) && (countLowers + countMids >= k))
			{
				return mid;
			}

			if (countLowers >= k)
			{
				end = mid - 1;
			}
			else
			{
				start = mid + 1;
			}
		}
		else
		{
			if (countLowers == k - 1)
			{
				int curMin = absMax;
				for (int m = 0; m < n; m++)
				{
					if (v[m] > mid && v[m] < curMin)
					{
						curMin = v[m];
					}
				}
				return curMin;
			}
			else
			{
				if (countLowers >= k)
				{
					end = mid - 1;
				}
				else
				{
					start = mid + 1;
				}
			}
		}
	}
	return start;
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

	int k;
	cin >> k;
	cout << kth_smallest(v, k);
	return 0;
}