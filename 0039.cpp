#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {return (n==1 || n==0) ? 1: n * factorial(n - 1);  }

void srt(vector<int> v,int first)
{
    printf("%d ",first);
    for (int per : v) printf("%d ",per);
    printf("\n");
    
    for(int i=0;i< factorial(v.size())-1;i++)
    {
        printf("%d ",first);
        next_permutation(v.begin(), v.end());
        for (int per : v) printf("%d ",per);
        printf("\n");
    }
}
int main()
{
    bool nof[9] = {0};
    int n,no;
    scanf("%d%d",&n,&no);
    
    vector<int> food(n);
    queue<int> restric;
    
    for(int i=0;i<no;i++) 
    {
        int in;
        scanf("%d",&in);
        nof[in] =1;
    }
    if(n==no)
    {
        for(int i=1;i<=n;i++) printf("%d ",i);
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        food[i-1]=i;
        if(!nof[i])restric.push(i);
    }
    
    vector<int> order(n-1);
    
    while(!restric.empty())
    {
        int idx=0;
        for(int i=0;i<n;i++)
        {
            if(food[i] != restric.front()) 
            {
                order[idx] = food[i];
                idx ++;
            }
        }
        srt(order,restric.front());
        restric.pop();
    }
    
}