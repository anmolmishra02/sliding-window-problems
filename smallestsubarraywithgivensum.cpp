#include<bits/stdc++.h>
using namespace std;

int solve(int*a,int n,int s)
{
  int windowstart=0;
  int windowsum=0;
  int minlen=INT_MAX;
 for(int windowend=0;windowend<n;windowend++)
 {
   windowsum+=a[windowend];
   while(windowsum>=s)
   {
     minlen=min(minlen,windowend-windowstart+1);
     windowsum-=a[windowstart];
     windowstart++;
   }
 }
 return minlen;
}


int main()
{int n;
cin>>n;
  int *a=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int s;
  cin>>s;
  cout<<solve(a,n,s);
}
