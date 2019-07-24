#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,count=0,r;
	cin>>n>>k;
	while (n!=0)
	{
		r=n%10;
		if(r==k)
		  {count++;}
		n=n/10;
		
	}
	cout<<count;
	return 0;
}
