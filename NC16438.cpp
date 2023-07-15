#include<bits/stdc++.h>
using namespace std;

bool ifleapyear(int year)
{
	if(year%400==0||(year%4==0&&year%100!=0))
		return true;
	else return false;
} 

bool ifdatetrue(int year,int month,int day)
{
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		if(1<=day&&day<=31)
			return true;
		else return false;
	}
	else if(month==2)
	{
		if(ifleapyear(year))
		{
			if(1<=day&&day<=29)
				return true;
			else return false;
		}
		else
		{
			if(1<=day&&day<=28)
				return true;
			else return false;
		}
	}
	else if(month==4||month==6||month==9||month==11)
	{
		if(1<=day&&day<=30)
			return true;
		else return false;
	}
	else return false;
}

int main()
{
	int date1,date2;
	cin>>date1>>date2;
	int year1=date1/10000;
	int year2=date2/10000;
//	cout<<"year1="<<year1<<"year2="<<year2<<endl;
	int sum=0;
	for(int i=year1;i<=year2;i++)
	{
		int year=i;
		int month=(year%10)*10;
		year/=10;
		month+=(year%10);
		year/=10;
		int day=(year%10)*10;
		year/=10;
		day+=year;
		int date=i*10000+month*100+day;
//		cout<<"year="<<i<<" month="<<month<<" day="<<day<<" date="<<date<<endl;
		if(ifdatetrue(i,month,day)&&date1<=date&&date<=date2)
			sum++;
	}
	cout<<sum;
	return 0;
}

