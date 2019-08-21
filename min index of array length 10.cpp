#include <iostream>
using namespace std;

int main() {
  int i,min;
  int arr[10];

  for(i=0;i<10;i++)
    cin >> arr[i];
  min=arr[0];
    for(i=0;i<10;i++){
      if(min>arr[i])
          min=arr[i];
    }
    cout<<min;
}
