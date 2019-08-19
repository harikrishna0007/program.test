#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int count = 0, i; 
    cin.getline(str,sizeof(str));
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << count + 1;
    return 0;
}
