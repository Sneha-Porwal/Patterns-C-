//SNEHA PORWAL(CSIT-2)
//PROGRAM PATTERN.
#include<iostream>
using namespace std;
void Pattern(int n)
{
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<"  ";
		}
		cout<<endl;
	}
}
int main()
{
	int r;
	cout<<"Enter the number of rows:";
	cin>>r;
	Pattern(r);
	
}
