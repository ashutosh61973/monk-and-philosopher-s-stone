#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
using namespace std;
stack<int>b;
vector<int>w;
int  main(){
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	int coin_worth;
	cin>>coin_worth;
 w.push_back(coin_worth); 
}
int q;
int x;
cin>>q;
cin>>x;
int i=0;
while(q--){
	string instr;
	cin>>instr;
	if(instr.compare(0,1,"H"))
	{
		b.push(w[i]);
		i++;
	}
	else
	b.pop();
}
int sum=0;
int number_of_coin=b.size();
for(int i=0;i<b.size();i++)
{
	sum=sum+b.top();
	b.pop();
}
if(sum==x)
cout<<number_of_coin;
else
cout<<-1;
}