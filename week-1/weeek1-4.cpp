#include<iostream>
using namespace std;
int main(){
	iny a,b,c;
	cout<<"enter a,b,c values";
	cin>>a>>b>>c;
	if((a>b)&&(a>c)){
		cout<<"a is big";
	}
		else if(b>c){
			cout<<"b is big";
		
	}
	else {
		cout<<"c is big";
	}
}