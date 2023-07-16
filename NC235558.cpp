#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[100005];
	for(int i=0;i<n;i++) cin>>a[i];
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;
		int ll,rr;
		int l=-1,r=n;
		while(l+1!=r){
			int m=(l+r)/2;
			if(a[m]>=x) r=m;
			else l=m;
		}
		ll=r;
		l=-1,r=n;
		while(l+1!=r){
			int m=(l+r)/2;
			if(a[m]>y) r=m;
			else l=m;
		}
		rr=l;
		cout<<rr-ll+1<<endl;
	}
	return 0;
}
