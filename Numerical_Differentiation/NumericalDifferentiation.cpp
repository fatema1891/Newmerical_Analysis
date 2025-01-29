
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


ll t,i,j,k,m=1000,n,index,flag=0,sign=1;

int main()
{
	fast;

	vd x(m);
	vvd y(m,vd(m,0));                //vector<vector<double>>(n,vector<double>(n))  =>row,colum
	dl xp,h,sum=0.0,term,first_derivative;
	cin>>n;                          //number of data
	for(i=0;i<n;i++)cin>>x[i];
	for(i=0;i<n;i++)cin>>y[i][0];
	cin>>xp;                        //value of x ,find calculate derivative
     for(i=0;i<n;i++)
     {
     	if(abs(xp-x[i])<0.0001)     // //checkin xp is valid?
     	{
     		index=i;
     		flag=1;
     		break;
     	}
     }

     if(flag==0)
     {
     	cout<<"Invalid calculation "<<endl;
     	exit(0);//return 0
     }

     for(i=1;i<n;i++)
     {
     	for(j=0;j<n-i;j++)
     	{
     		y[j][i]=y[j+1][i-1]-y[j][i-1];
     	}
     }

     h=x[1]-x[0];//finit difference
     sum=0.0;
     for(i=1;i<n-index;i++)
     {
     	term=pow(y[index][i],i)/i;
     	sum+=sign*term;//initial sign =1 rakha hoyece
     	sign=-sign;
     }
     first_derivative=sum/h;
     cout<<" the first derivative at x = "<<xp<<" is "<<first_derivative<<endl;
     return 0;
}
