#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		if(n%j==0 && j%2==0)
			cout<<j<<" ";
	}

	return 0;
}
