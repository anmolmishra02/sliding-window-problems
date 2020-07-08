#include<bits/stdc++.h>
using namespace std;

int maxsubarrayofone(vector<int> a,int n,int k)
{
  int windowstart=0;
  int maxlen=0;
  int zerocount=0;
  for(int windowend=0;windowend<n;windowend++)
  {
    if(a[windowend]!=1)
    {
      zerocount++;
    }
    while(zerocount>k)
    { if(a[windowstart]==0)
      {
        zerocount--;
      }
      windowstart++;
    }
    maxlen=max(maxlen,windowend-windowstart+1);
  }
  return maxlen;
}

int main()
{
  int n;
  cin>>n;
  vector<int> a;
  for(int i=0;i<n;i++)
  {
    int no;
    cin>>no;
    a.push_back(no);
  }
  int k;
  cin>>k;
  cout<<maxsubarrayofone(a,n,k);
}
