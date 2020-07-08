#include<bits/stdc++.h>
using namespace std;

int solve(string s,int k)
{
  unordered_map<char,int> mp;
  int windowstart=0;
  int maxlen=0;
  for(int windowend=0;windowend<s.length();windowend++)
  {
    char curr=s[windowend];
    mp[curr]++;
    while((int)mp.size()>k)
    {
      char front=s[windowstart];
      mp[front]--;
      if(mp[front]==0)
      {
        mp.erase(curr);
      }
      windowstart++;
    }
    maxlen=max(maxlen,windowend-windowstart+1);
  }
  return maxlen;
}


int main()
{
  string s;
  cin>>s;
  int k;
  cin>>k;
  cout<<solve(s,k);
}
