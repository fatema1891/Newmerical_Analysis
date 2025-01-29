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

#define f(x) 3*pow(x,2)
/*dl f(dl x)
{
	return 3*pow(x,2);
}*/
ll t,i,j,k,m=1000,n,index,flag=0,sign=1;

int main()
{
	fast;
	dl lower,upper,integration=0.0,stepSize,k;
	ll i,subInterval;
	cin>>lower;       //lower limit
	cin>>upper;      //upper limit
	cin>>subInterval;
	stepSize=(upper-lower)/subInterval;
	integration=f(lower)+f(upper);
	for(i=1;i<=subInterval-1;i++)
	{
		k=lower+i*stepSize;
		integration=integration+2*f(k);
	}
	integration=(integration*stepSize)/2;
	cout<<"Required value of integration is : "<<integration<<endl;

}
