#include <iostream>
using namespace std;

int main() {
  int i,m;
  int arr[10];

  for(i=0;i<10;i++)
    cin >> arr[i];
  m=arr[0];
    for(i=0;i<10;i++){
      if(m<arr[i])
          m=arr[i];
    }
    cout<<m;
}
