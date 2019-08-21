#include <iostream>
#include<string>
using namespace std;

int main() {
     int n;
     cin>>n;
     int h[n];
     for(int i=0;i<n;i++){
     	cin>>h[i];
     }
     for(int i=0;i<n;i++){
     cout<<h[i]<<' '<<i<<"\n";
     }
}
