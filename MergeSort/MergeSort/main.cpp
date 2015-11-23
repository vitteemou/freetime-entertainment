#include <iostream>
#include <vector>

using namespace std;
void merge(vector<int> &L, vector<int> &R, vector<int> &A)
{
	int nL = L.size();
	int nR = R.size();

	int i = 0;
	int j = 0;
	int k = 0;

	while (i < nL && j < nR)
	{
		if (L[i] < R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < nL)
	{
		A[k] = L[i];
		i++;
		k++;
	}
	while (j < nR)
	{
		A[k] = R[j];
		j++;
		k++;
	}
	//delete L;
	//delete R;
	return;
}


void mergeSort(vector<int> &A)
{
	int n = A.size();
	if (n < 2)
	{
		return;
	}

	int middle = n / 2;
	vector<int> L;// (middle);
	vector<int> R;// (n - middle);

	for (int i = 0; i < middle; i++)
	{
		L.push_back(A[i]);
	}
	for (int i = middle; i < n; i++)
	{
		R.push_back(A[i]);
	}

	mergeSort(L);
	mergeSort(R);
	merge(L, R, A);
}


int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	mergeSort(v);
	for (int i = 0; i < n; i++)
	{
		cout<< v[i]<<' ';
	}
	cout << endl;
	return 0;
}

