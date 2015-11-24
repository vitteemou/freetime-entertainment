//Given a string s consists of upper / lower - case alphabets and empty space characters ' ', return the length of last word in the string.
#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string &s) {
	if (s.empty())
	{
		return 0;
	}

	int i = s.length() - 1;
	while ((s[i] == ' ') && (i >= 0))
	{
		i--;
	}
	if (i < 0)
	{
		return 0;
	}
	int count = 0;
	while ((s[i] != ' ') && (i >= 0))
	{
		count++;
		i--;
	}
	return count;
}

int main()
{
	string s;
	getline(cin, s);
	cout << lengthOfLastWord(s);
	return 0;
}