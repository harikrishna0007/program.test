#include<iostream.h> 
#include<string.h>
#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    int i,j;
    int n1=strlen(str1);
    int n2=strlen(str2);
    int c=0;
    if(n1!=n2)
    {
          cout<<"\nThey are not anagrams ! ";
          return 0;
    }
    else 
    {
         for(i=0;i<n1;i++)
             for(j=0;j<n2;j++)
                 if(str1[i]==str2[j])
                     ++c;
    }
    if(c==n1)
        cout<<"yes ! anagram !! ";
    else 
        cout<<"no ! ";

    system("pause");
    return 0;
}
