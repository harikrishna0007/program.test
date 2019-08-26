#include <iostream>
using namespace std;

int main() {
  string s;
  cin>>s;
  int count;
  int len =s.length();
  for(int i=0;i<len;i++){
      count=0;
      for(int j=0;j<len;j++){
        if(i!=j && s[i]==s[j]){
          count=1;
          break;
        }
      }
      if(count==0){
        cout<<s[i];
      }
  }
}
