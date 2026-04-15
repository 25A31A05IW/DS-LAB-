#include<stdio.h>
using namespace std;
int swap(int,int);
int main(){
	int x=10,y=20;
	swap(x,y);
	cout<<x<<y;
	
}
swap(int &p,int &q){
	p=p+q;
	q=p-q;
	p=p-q;
}