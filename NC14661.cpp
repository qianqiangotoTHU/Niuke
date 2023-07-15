#include<bits/stdc++.h>
using namespace std;

int main()
{
	int data[400050]={0};
	int head=200000,tail=200001;
	int n,m;
	cin>>n>>m;
	while(m--){
		int i;
		int a;
		cin>>i;
		switch (i) {
		case 1:
			cin>>a;
			data[head]=a;
			head--;
			break;
		case 2:
			head++;
			break;
		case 3:
			cin>>a;
			data[tail]=a;
			tail++;
			break;
		case 4:
			tail--;
			break;
		case 5:
			reverse(data+head+1,data+tail);
			break;
		case 6:
			cout<<tail-head-1<<endl;
			for(int j=head+1;j<tail;j++){
				if(j!=tail-1) cout<<data[j]<<" ";
				else cout<<data[j]<<endl;
			}
			break;
		case 7:
			sort(data+head+1,data+tail);
			break;
		}
	}
	return 0;
}
