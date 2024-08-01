#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0),ios_base::sync_with_stdio(0);
	int d,n;
	int I =0,V=0,X=0,L=0,C=0;
	cin >> d;
     
// I=1 V=5 X=10 L=50 C=100
	for(int i=0;i<=d;i++)
	{
	  n = i;
	  while (n)
	  {
		    if (n>=100) n-=100,C++;
			else if (n>=90) n-=90,X++,C++;
			else if (n>=50) n-=50,L++;
			else if (n>=40) n-=40,X++,L++;
			else if (n>=10) n-=10,X++;
			else if (n>=9) n-=9,I++,X++;
			else if (n>=5) n-=5,V++;
			else if (n>=4) n-=4,V++,I++;
			else if (n>=1) n-=1,I++;
	  }
	
	}
		  cout << I << " " << V << " " << X << " " << L << " "<<C;
}