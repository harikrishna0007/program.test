#include <iostream>
using namespace std;

int main() {
	string str;
  	int i, j, len, startIndex, endIndex;
  	getline(cin,str);
  	len = str.length()-1;
  	for(i = len; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= len; j++)
			{
				cout<<str[j];
			}
			 len = i-1;
			cout<<" ";				
		} 
	}
	
	return 0;
}
