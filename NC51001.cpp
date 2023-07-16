#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a[1000005],q[1000005];
	for(int i=1;i<=n;i++) cin>>a[i];
	int hh=0,tt=-1; //一般队列就按这样定义就行
	for(int i=1;i<=n;i++)
	{
		if(hh<=tt && q[hh]<i-k+1) hh++;   //q[hh]不在窗口内，队头出队
		while(hh<=tt && a[i]<=a[q[tt]]) tt--;    //删除队尾元素
		q[++tt]=i;  //下标入队
		if(i>=k) cout<<a[q[hh]]<<' ';
	}
	cout<<endl;
	hh=0,tt=-1;
	for(int i=1;i<=n;i++)
	{
		if(hh<=tt && q[hh]<i-k+1) hh++;   //q[hh]不在窗口内，队头出队
		while(hh<=tt && a[i]>=a[q[tt]]) tt--;    //删除队尾元素
		q[++tt]=i;  //下标入队
		if(i>=k) cout<<a[q[hh]]<<' ';
	}

	return 0;
}
