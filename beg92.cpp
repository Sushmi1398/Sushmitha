#include<iostream>
using namespace std;
int main()
{
  int a[10],n, sum=0;
  cin>>n;
  for(int i=0; i<n; i++)
  { cin>>a[i];
    sum+=a[i];
   }
   cout<<sum;
}
