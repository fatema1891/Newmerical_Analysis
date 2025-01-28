#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using vd=std::vector<double>;
using vvd=vector<vd>;
#define ll long long int
#define dl double

using vl=vector<ll>;
using vvl=vector<vl>;
using vc=vector<char>;
using vi=vector<int>;


ll t,i,j,k,n=1000,index;

dl forwaredDifference(vd y,ll index,dl h)
{
	return (y[index+1]-y[index])/h;
}

dl backworedDifference(vd y,ll index,dl h)
{
	return(y[index]-y[index-1])/h;
}

int main()
{
	vd x(n),y(n);
	ll m;
	while(1)
	{
		cin>>m;
		if(m>1)break;
	}
	for(i=0;i<m;i++)cin>>x[i];
	for(i=0;i<m;i++)cin>>y[i];
		double h=x[1]-x[0];//all difference same
	//input index for differentiation
	cin>>index;
	if(index<0||index>=n)cout<<"Invalid index "<<endl;
	else
	{
		if(index<n-1)
		{
			dl forwared=forwaredDifference(y,index,h);
			cout<<"forwared difference at index "<<index<<" : "<<forwared<<endl;
		}
		else cout<<"forwared difference not possible at index "<<index<<endl;

		if(index>0)
		{
			dl backwored=backworedDifference(y,index,h);
			cout<<"Backwored difference at index "<<index<<" : "<<backwored<<endl;
		}
		else cout<<"Backwored difference not possible at index "<<index<<endl;
	}
}
