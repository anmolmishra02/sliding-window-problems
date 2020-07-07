#include<bits/stdc++.h>
using namespace std;


int solve(int*a,int n,int k)
{
  int maxsum=INT_MIN;
  int csum=0;
  int windowstart=0;
  for(int windowend=0;windowend<n;windowend++)
  {
    csum+=a[windowend];
    if(windowend>=k-1)
    {
      maxsum=max(maxsum,csum);
      csum-=a[windowstart];
      windowstart++;
    }
  }
  return maxsum;
}


int main()
{
  int n;
  cin>>n;
  int*a=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int k;
  cin>>k;
  cout<<solve(a,n,k);
}
