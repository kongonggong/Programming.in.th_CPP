#include <bits/stdc++.h>
using namespace std;

int main()
{
      map<int,int> mp;
      size_t in,sum=0,s,p;
      size_t arr[10];
      for(size_t i=0;i<9;i++) 
      {
         cin >> in;
         sum += in;
         arr[i] =in;
         mp[in] = i+1;
      }
      sum -= 100;
    //   cout << sum;
      for(size_t j=0;j<9;j++)
      {
          if(mp[sum - arr[j] ] != 0) 
          {
              s = j;
              p = mp[sum - arr[j] ] -1;
              break;
          }
      }
        //cout << s << " " << p;
      for(size_t i=0;i<9;i++) {if(i!=s && i!=p) cout << arr[i] << "\n";}
}