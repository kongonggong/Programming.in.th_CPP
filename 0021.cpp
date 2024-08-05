#include<bits/stdc++.h>
using namespace std;
int main()
{
   string ans,in;
   getline(cin,in);
   for(size_t i=0;i<in.size();i++)
   {
       if(in.substr(i, 3) == "epe" || in.substr(i, 3) == "apa" || in.substr(i, 3) == "ipi" || in.substr(i, 3) == "opo" || in.substr(i, 3) == "upu" )
       {
           ans+= in[i];
           i +=2;
       }
       else ans += in[i];
   }
   cout << ans;
}