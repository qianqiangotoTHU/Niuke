#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int num[105];
	for(int i=0;i<=n;i++)
		cin>>num[i];
	int sign=0;
	for(int i=0;i<=n;i++)
	{
		if(num[i]!=0)
		{
			if(n-i==0)//最后一个 
			{
				if(sign==1)//前面有
				{
					if(num[i]>0) cout<<"+";
				}
				cout<<num[i]; 
				sign=1;
			}
			else
			{
				if(sign==0)//第一个
				{
					if(num[i]==1);
					else if(num[i]==-1) cout<<"-";
					else cout<<num[i];
					if(n-i==1) cout<<"x";
					else cout<<"x^"<<n-i;
					sign=1;
				}
				else
				{
					if(num[i]==1) cout<<"+";
					else if(num[i]==-1) cout<<"-";
					else if(num[i]>1) cout<<"+"<<num[i];
					else cout<<num[i];
					if(n-i==1) cout<<"x";
					else cout<<"x^"<<n-i;
				} 
			}
		}
	}
	if(sign==0) cout<<"0";
	return 0;
}

