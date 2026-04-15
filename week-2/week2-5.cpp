#include<iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
int main(){
	int a=4,b=6,c=8;
	cout<<add(a,b);
	cout<<add(a,b,c);
}
add(int x,int y){
	return x+y;
}
add(int x,int y,int z){
	return x+y+z;
}