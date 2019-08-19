#include <iostream>
using namespace std;

int main() {
  string s;
  int n;
  cin>>s;
  for(int i=s.length()-1;i>=0;i--){
    cout<<s[i];
  }
}
