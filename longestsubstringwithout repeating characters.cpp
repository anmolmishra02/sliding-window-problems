#include<bits/stdc++.h>
using namespace std;

int longestsubstringworepeat(string a)
{
  unordered_map<char,int> mp;
  int windowstart=0;
  int windowlen=0;
  for(int windowend=0;windowend<a.length();windowend++)
  {
    mp[a[windowend]]++;
    while(mp[a[windowend]]>1)
    {
      mp[a[windowstart]]--;
      if(mp[a[windowstart]]==0)
      {
        mp.erase(a[windowstart]);
      }
      windowstart++;
    }
     windowlen=max(windowlen,windowend-windowstart+1);
  }
 return windowlen;
}


int main()
{
  string s;
  cin>>s;
  cout<<longestsubstringworepeat(s);
}
