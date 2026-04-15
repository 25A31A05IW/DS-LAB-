#include<iostream>
using namespace std;
int main ()
{
	int i ,first ,lat , middle ,n;
	search array [100];
	cout<< "enter no. of elements \n";
	cin >>n;
	for (c=0;c<n;c++)
	{
		cin >>array[c];
		
	}
	cout<<"enter value to find \n";
	cin >> search ;
	first =0;
	cout=n-1;
	middle =(first +last )/2
	while (first <=last )
	{
		if (array [middle]<search )
		first=middle+1;
		else if (array [middle]==search)
		{cout<<"found at location\n"<<"middle";
		break;
		 
		}
		else 
		last =middle -1;
		middle =(first+last )/2 ;
		
	}
	 if (first last)
cout<<"not found is not present in the list\n";
return 0;

}