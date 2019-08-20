#include <iostream>
using namespace std;
int main()
{
    string s;
    char c;
    cin>>s;
    cin>>c;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    cout<< count;
    return 0;
}
