#include<bits/stdc++.h>
using namespace std;
int main()
{
    size_t n; float k = 2.000000;
    cin >> n;
    if(n==3) {printf("%.6f",2+sqrt(3)); return 0;}
    for(size_t i=2;i<=n;i++)
    {
        if(i%2 ==0) k =float(i);
        else{
            k = k-2 + (2*sqrt(3));
        }
    }
    printf("%.6f",k);
}