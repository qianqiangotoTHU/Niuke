#include<bits/stdc++.h>
using namespace std;

int main()
{
	int M,N;
	cin>>M>>N;
	int word;
	int haxi[1005]={0};//是否有那个单词
	int now=0;//目前内存
	queue<int>men; 
	int time=0;//查询次数 
	for(int i=0;i<N;i++)
	{
		cin>>word;
		if(haxi[word]==0)
		{
			time++;
			if(now<M)
			{
				haxi[word]=1;
				men.push(word);
				now++;
			}
			else
			{
				int w=men.front();
				men.pop();
				haxi[w]=0;
				men.push(word);
				haxi[word]=1;
			}
		}
	}
	cout<<time;
	
	return 0;
}

