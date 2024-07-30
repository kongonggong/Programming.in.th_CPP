#include<bits/stdc++.h>
using namespace std;
size_t fac(size_t n,size_t i=1,size_t tmp=1) 
{
    size_t temp = tmp*i;
    if(i == n) return temp;
    else {
        return fac(n,i+1,temp);
    }
}

size_t ncr(size_t n,size_t r)
{
    double ans =  ( fac(n,n-r+1) /fac(r) );
    return ans;
}

int main()
{
    size_t n,c=0;
    cin >> n;
    if(n==1) {cout << 2; return 0;}
    for(size_t i=0;i < (n/2)+1;i++)
    {
        if( (n-i) - i == 1) c+=(2*ncr(n,i));
        else if((n-i) - i == 0) c+=(ncr(n,i));
    }
    cout << c;
}