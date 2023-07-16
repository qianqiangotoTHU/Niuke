#include<bits/stdc++.h>
using namespace std;
vector<long long>seg;
int N,K;

bool check(int r)
{
	int i=0;
	int sum=0;
	int j=0;
	while(j<N){
		int right=seg[i]+2*r;
		sum++;
		while(j<N&&seg[j]<=right){
			j++;
		}
		i=j;
	}
	//cout<<"sum="<<sum<<endl;
	if(sum<=K) return true;
	else return false;
}

int main()
{
	cin>>N>>K;
	for(int i=0;i<N;i++){
		long long x;
		cin>>x;
		seg.push_back(x);
	}
	sort(seg.begin(),seg.end());
	//for(int i=0;i<N;i++) cout<<seg[i]<<" ";
	int ans;//用来存答案 
	int low=1,high=seg[N-1];//最小、最大可能的值
	while(low<=high){
		int mid = (low + high) / 2;
		if(check(mid)){
			ans=mid;
			//cout<<"mid="<<mid<<endl;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	cout<<ans;
	return 0;
}
