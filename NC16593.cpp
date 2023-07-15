#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ditan[10010][4];
	for(int i=1;i<=n;i++)
	{
		cin>>ditan[i][0];
		cin>>ditan[i][1];
		cin>>ditan[i][2];
		cin>>ditan[i][3];
	}
	int x,y;
	cin>>x>>y;
	int up=-1;
	for(int i=1;i<=n;i++)
	{
		if(ditan[i][0]<=x&&x<=ditan[i][0]+ditan[i][2]&&ditan[i][1]<=y&&y<=ditan[i][1]+ditan[i][3])
			up=i;
	}
	cout<<up;
	return 0;
}

