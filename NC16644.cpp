#include<bits/stdc++.h>
using namespace std;
int p1,p2,p3;

void expand(char c1,char c2)
{
	if(('a'<=c1&&c1<='z')&&('a'<=c2&&c2<='z'))//同为小写字母
	{
		if(c1<c2-1)//填充 
		{
			if(p3==1)
				for(char c=c1+1;c<c2;c++)//顺序 
				{
					if(p1==1)//小写 
						for(int i=0;i<p2;i++)//重复 
							cout<<c;
					if(p1==2)//大写
						for(int i=0;i<p2;i++)//重复
							printf("%c",c-('a'-'A'));
					if(p1==3)//星号
						for(int i=0;i<p2;i++)//重复 
							cout<<"*";
				}
			else
				for(char c=c2-1;c>c1;c--)//逆序 
				{
					if(p1==1)//小写 
						for(int i=0;i<p2;i++)//重复 
							cout<<c;
					if(p1==2)//大写
						for(int i=0;i<p2;i++)//重复
							printf("%c",c-('a'-'A'));
					if(p1==3)//星号
						for(int i=0;i<p2;i++)//重复 
							cout<<"*";
				}
		}
		else if(c1==c2-1);//去“-” 
		else cout<<"-";
	} 
	else if('0'<=c1&&c1<='9'&&'0'<=c2&&c2<='9')//数字 
	{
		if(c1<c2-1)//填充 
		{
			if(p3==1)
				for(char c=c1+1;c<c2;c++)//顺序 
				{
					if(p1==1||p1==2)
						for(int i=0;i<p2;i++)//重复 
							cout<<c;
					if(p1==3)//星号
						for(int i=0;i<p2;i++)//重复 
							cout<<"*";
				}
			else
				for(char c=c2-1;c>c1;c--)//逆序 
				{
					if(p1==1||p1==2)//小写 
						for(int i=0;i<p2;i++)//重复 
							cout<<c;
					if(p1==3)//星号
						for(int i=0;i<p2;i++)//重复 
							cout<<"*";
				}
		}
		else if(c1==c2-1);//去“-” 
		else cout<<"-";
	}
	else cout<<"-";
}

int main()
{
	cin>>p1>>p2>>p3;
	char s[105];
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]!='-')
			cout<<s[i];
		else
		{
			expand(s[i-1],s[i+1]);
		}
	}
	return 0;
}
