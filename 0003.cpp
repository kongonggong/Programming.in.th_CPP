#include<bits/stdc++.h>
using namespace std;

int main()
{
   size_t w,d;
   cin >> w >> d;
   int arr[w][d];
   for(size_t i=0;i<w;i++) for(size_t j=0;j<d;j++) cin >> arr[i][j];
   for(size_t i=0;i<w;i++) 
   {
       for(size_t j=0;j<d;j++)
       {
           int arr2;
           cin >> arr2;
           cout << arr[i][j] + arr2 << " ";
       }
       cout << "\n";
   }
}