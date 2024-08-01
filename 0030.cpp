/*
 * Hint: You can split into digit * 10 power digit and mod each one and youll will understand :)
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    string num;
    int m3=0,m11=0;
    cin >> num;
    
    for(size_t i=0;i<num.length();i++)
    {
        int tmp = num[i] -'0';
         m3 += tmp;
        if( (num.length() - (i+1) ) % 2 == 0) m11 += tmp;
        else m11 -= tmp;
    }
    if(m11%11<0) printf("%d %d",m3%3,11+(m11%11));
    else printf("%d %d",m3%3,m11%11);
}