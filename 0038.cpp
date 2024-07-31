#include<bits/stdc++.h>
using namespace std;

int main()
{
   std::vector<string> v;
   string tmp;
   size_t n;
   cin >> n;
   for(size_t i=0;i<n;i++)
   {
       string in;
       cin >> in;
       v.emplace_back(in);
   }
   sort(v.begin(),v.end());
   for(size_t i=0;i<n;i++)
   {
       if(tmp == v[i]) continue;
       else cout << v[i] << "\n";
       tmp = v[i];
   }
}