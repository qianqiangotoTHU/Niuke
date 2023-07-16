#include<bits/stdc++.h>
using namespace std;

int main()
{
	int P;
	cin>>P;
	while(P--){
		priority_queue<int> h;// 大根堆；
		priority_queue<int,vector<int>,greater<int>> g;//小根堆；
        int index;
		scanf("%d",&index);
		int M;
		scanf("%d",&M);
		printf("%d %d",index,(M+1)/2);
		for(int i=1;i<=M;i++){
	if((i)%20==1) printf("\n");
	int num;
	scanf("%d",&num);
	if(i==1)	h.push(num);
	else{
		if(h.top()<num) g.push(num);
		else h.push(num);
		while(h.size()-g.size()>1){
			g.push(h.top());
			h.pop();
		}
		while(g.size()>h.size()){
			h.push(g.top());
			g.pop();
		}
	}
			if(i%2==1) printf("%d ",h.top());
		}
		printf("\n");
	}
	return 0;
}
