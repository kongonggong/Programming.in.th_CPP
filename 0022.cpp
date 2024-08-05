#include<bits/stdc++.h>
using namespace std;
using sz = size_t;

int main()
{
  sz n;
  cin >> n;
  
  std::vector<string> lines(n,"");
  if(n%2==0)
  {
      sz l=(n/2)-1,r=(n/2)-1;
      for(sz i=0;i<n/2;i++)
      {
          for(sz j=0;j<n-1;j++)
          {
              if(l==r && j==l) {
                  lines[i] +='*';
                  lines[(n-i)-1] +='*';
              }
              else if(l!=r && j==l || j==r) 
              {
                  lines[i] +='*';
                  lines[(n-i)-1] +='*';
              }
              else 
              {
                  lines[i] +="-";
                  lines[(n-i)-1] +='-';
              }
          }
          l--;
          r++;
      }
  }
  else 
  {
      sz l=(n/2),r=(n/2);
      
      for(sz i=0;i<n;i++) 
      {
          if(i==0||i==n-1) lines[(n/2)] +='*';
          else lines[(n/2)] +='-';
      }
      
      for(sz i=0;i<n/2;i++)
      {
          for(sz j=0;j<n;j++)
          {
              if(l==r && j==l) {
                  lines[i] +='*';
                  lines[(n-i)-1] +='*';
              }
              else if(l!=r && j==l || j==r) 
              {
                  lines[i] +='*';
                  lines[(n-i)-1] +='*';
              }
              else 
              {
                  lines[i] +="-";
                  lines[(n-i)-1] +='-';
              }
          }
          l--;
          r++;
      }
  }
  for(sz i=0;i<n;i++) cout << lines[i] << "\n";
}