
//Newton backwared Interpolation method user input

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
using vl=std::vector<ll>;
using vvl=vector<vl>;
#define mnv *min_element(v.begin(),v.end())
#define mxv *max_element(v.begin(),v.end());
using vd=vector<double>;
using vvd=vector<vd>;

#define EPSILON 0.01

ll t,i,n,m,j,k;


int main()
{
	fast;
	ll n,m;
	cin>>n;
	m=n+5;
	vvd a(m,vd(m,0));
	for(i=0;i<n;i++)cin>>a[i][0];

	for(i=0;i<n;i++)cin>>a[i][1];

	for(j=2;j<=n;j++)
	{
		for(i=n-1;i>=(j-1);i--)
		{
			a[i][j]=a[i][j-1]-a[i-1][j-1];
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<=i+1;j++)
		{
			cout<<a[i][j]<<"   ";
		}
		cout<<endl;
	}
	double val,y,u,u1,fact=1;
	cin>>val;
	 u=(val-a[n-1][0])/(a[1][0]-a[0][0]);
	 y=a[n-1][1];
	 u1=u;
	for(i=2;i<=n;i++)
	{
		y=y+(u1*a[n-1][i])/fact;
		fact*=i;
		u1=u1*(u+(i-1));
	}
	cout<<endl;
	cout<<"value at "<<val<<" is "<<y<<endl;
	return 0;

}


