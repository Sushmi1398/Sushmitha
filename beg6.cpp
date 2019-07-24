#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	if(((x%100==0) && (x%400==0)) || (x%100!=0 && x%4==0))
	cout<<"yes";
    else
	cout<<"no";
	
	return 0;
}
