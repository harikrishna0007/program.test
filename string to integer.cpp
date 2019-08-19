#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s="123";
	int i = 0,c;
	for (char c : s)
	{
		if (c >= '0' && c <= '9') {
			i = i * 10 + (c-'0');
		}
	}

	cout << i << '\n';

	return 0;
}
