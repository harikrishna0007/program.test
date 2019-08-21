#include <iostream>
using namespace std;

int main() {
	int s1=5,s2=3,i=0,j=0;
	int k=s1+s2;
	int a1[s1];
	int b1[s2];
	int res[k];
	for(int i=0;i<s1;i++){
		cin>>a1[i];
	}
	for(int j=0;j<s2;j++){
		cin>>b1[j];
	}
	k=0;
	while(i<s1&&j<s2){
	    if(a1[i]<b1[j]){
	        res[k]=a1[i];
	        i++;
	        k++;
	    }
	    else{
	        res[k]=b1[j];
	        j++;
	        k++;
	    }
	}
	while(i<s1)
	    res[k++]=a1[i++];
	while(j<s2)
	    res[k++]=b1[j++];
	for(int i=0;i<s1+s2;i++){
	    cout<<res[i];
	}
	return 0;
}
