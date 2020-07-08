
/* this problem is similar to longest substring with 2 distinct characters */


#include<bits/stdc++.h>
using namespace std;


int maxfruitsinbasket(vector<char> s,int n)
{
  unordered_map<char,int> mp;
  int windowstart=0;
  int maxlen=0;
  for(int windowend=0;windowend<n;windowend++)
  {
    mp[s[windowend]]++;
    while(mp.size()>2)
    {
      mp[s[windowstart]]--;
      if(mp[s[windowstart]]==0)
      {
        mp.erase(s[windowstart]);
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
  vector<char> s;
  for(int i=0;i<n;i++)
  {
    char c;
    cin>>c;
    s.push_back(c);
  }
  cout<<maxfruitsinbasket(s,n);
}

/*


input
6                                                                                                                             
a b c b b c  
OUTPUT:
5      
*/


