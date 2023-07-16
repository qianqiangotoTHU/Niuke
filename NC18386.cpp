#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int min=1000005;
	int alphant[30]={0};//每个字母的个数
	int num=0;//小写字母的种类数
	int l=0,r=0;
	alphant[s[0]-'a']++;
	num++;
	while(l<len){
		while(num<26&&r<len-1){
			r++;
			alphant[s[r]-'a']++;
			if(alphant[s[r]-'a']==1) num++;
		}
		if(num==26&&r-l+1<min) min=r-l+1;
		alphant[s[l]-'a']--;
		if(alphant[s[l]-'a']==0) num--;
        l++;
	}
	cout<<min;
	return 0;
}
