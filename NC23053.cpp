#include<bits/stdc++.h>
using namespace std;
 
char A[1000000];
int position[30];//A中各个字母首次出现的位置
 
int find(char*B)
{
    int alen=strlen(A);
    int blen=strlen(B);
    int a=position[B[0]-'a'];
    int b=0;
    if(a==-1) return 0;
    else
    {
        for(int i=a;i<alen;i++){
            if(b==blen-1&&A[i]==B[b]){
                return 1;
            }
            else if(A[i]==B[b]){
                b++;
            }
        }
        return 0;
    }
}
 
int main()
{
     
    int N;
    scanf("%s%d",A,&N);
    for(int i=0;i<30;i++) position[i]=-1;
    int alen=strlen(A);
    for(int i=0;i<alen;i++) 
    {
        if(position[A[i]-'a']==-1) position[A[i]-'a']=i;
        //  cout<<"A[i]-'a'="<<A[i]-'a'<<" ";
        //cout<<"position["<<i<<"]="<<position[i]<<" ";
    }
    while(N--){
        char B[1000000];
        scanf("%s",B);
        int sign=find(B);
        if(sign==0) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
