#include<bits/stdc++.h>
using namespace std;

int heap[100010],tot=0;//heap是堆（下标从1开始），tot是堆的末尾（数值代表元素个数）
void up(int p)//将下标为p的元素上浮到正确的位置
{
	while(p>1)//不是堆顶时
		if(heap[p]<heap[p/2]) //比父节点大就跟父节点交换
			swap(heap[p],heap[p/2]), p/=2;
	else break;
}
void Insert(int val)//插入元素val
{
	heap[++tot]=val;//在末尾插入
	up(tot);
}
void down(int p)//将下标为p的元素下沉到正确的位置
{
	int s=p*2;//左孩子
	while(s<=tot) {//没有超出末尾时
		if(s<tot&&heap[s]>heap[s+1]) s++;//右孩子存在且更大
		if(heap[s]<heap[p]) swap(heap[s],heap[p]),p=s,s*=2;//孩子比父亲大，交换
		else break;
	}
}
int Extract()//移除堆顶
{
	int top=heap[1];
	heap[1]=heap[tot--];//将堆顶放到末尾
	down(1);
	return top;
}
int Remove(int p)//移除下标为p的元素
{
	int ret=heap[p];
	heap[p]=heap[tot--];
	up(p),down(p);
	return ret;
}


int main()
{
	int n;
	int a[10005]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		Insert(a[i]);
	}
	int ans=0;
	while(tot>1){
		int fir=Extract();
		int sec=Extract();
		ans+=fir+sec;
		Insert(fir+sec);
	}
	cout<<ans;
	return 0;
}
