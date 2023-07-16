#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b)
{
	string x1=a+b;
	string x2=b+a;
	return x1>x2;
}

int main()
{
	int n;
	cin>>n;
	vector<string> num;
	for(int i=0;i<n;i++){
		string d;
		cin>>d;
		num.push_back(d);
	}
	sort(num.begin(),num.begin()+n,cmp);
	for(int i=0;i<n;i++){
		cout<<num[i];
	}
	return 0;
}
