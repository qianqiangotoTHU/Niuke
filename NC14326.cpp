#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		do{
			int num[10005]={0};
			int sign=1;
			int j;
			int index;
			cin>>j;
			if(j==0) break;
			num[j]=1;
			index=j;
			for(int i=0;i<n-1;i++){	
				cin>>j;
				if(sign==0) continue;
				else if(j>index)
				{
					num[j]=1;
					index=j;
					continue;
				}
				else
				{		
					while(num[index]){
						index--;
					}
					if(index!=j){
						sign=0;
						continue;
					}
					index=j;
					num[j]=1;
				}
			}
			if(sign) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}while(1);
		cout<<endl;
	}
	return 0;
}
