#include<iostream>
using namespace std;
int main(){
	int n,fact=1;
	cout<<"enter n value";
	cin>>n;
	if(n==0)
	cout<<fact;
	else
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"factorial is "<<fact;
}