#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool c=0,C=0;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        // cout << int(s[i]) <<" ";
        if(c==1&&C==1) break;
        if(int(s[i])>=97)  c = 1;
        else if(int(s[i])<=90) C = 1;
    }
   if(c==1 && C==1) cout <<"Mix" ;
   if(c==0&&C==1) cout << "All Capital Letter";
   if(c==1 && C==0) cout << "All Small Letter";
   
}