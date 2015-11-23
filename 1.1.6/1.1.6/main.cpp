#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;

	cout << "Enter a and b" << endl;
	cin >> a >> b;

	int sum = a;
	int i = 1;
	int j;

	while(i <= b)
	{
		int term = sum;
		sum = term+1;
		j = i;
		i = j+1;
	}

	cout<<"Sum: "<<sum<<endl;

	return 0;

}