#include<bits/stdc++.h>
using namespace std;

double* solve(int*a,int n,int k)
{
  int windowstart=0;
  double windowsum=0;
  double*result=new double(n-k+1);
  for(int windowend=0;windowend<n;windowend++)
  {
    windowsum+=a[windowend];
    if(windowend>=k-1)
    {
      result[windowstart]=windowsum/k;
      windowsum-=a[windowstart];
      windowstart++;
    }
  }
  return result;
}

int main()
{
  int n;
  cin>>n;
  int *a=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int k;
  cin>>k;
  double*result=solve(a,n,k);
  for(int i=0;i<n-k+1;i++)
  {
    cout<<result[i]<<" ";
  }
}
