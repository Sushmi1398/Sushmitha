#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[20],b,sum=0,n;
	cin>>n>>b;
	for (int i=0;i<n; i++)
	{
		cin>>a[i];
		if(i<b)
		sum+=a[i];
	}
	return 0;
}
