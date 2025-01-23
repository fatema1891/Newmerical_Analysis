//Bisection method

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
using vl=std::vector<ll>;
using vvl=vector<vl>;
#define mnv *min_element(v.begin(),v.end())
#define mxv *max_element(v.begin(),v.end());

#define EPSILON 0.01

ll t,i,n,m,j,k;
double func(double a)
{
	return a*a*a - a*a+2;
}

void bisection(double p,double q)
{
	if(func(p)*func(q)>=0)
	{
		cout<<"Roots are Invalid "<<endl;
		return;

	}
	double c=p;
	while((q-p)>=EPSILON)
	{
		c=(p+q)/2;
		if(func(c)==0.0)break;
		else if(func(p)*func(c)<0)q=c;
		else p=c;
	}
	cout<<"the value of root is : "<<c;
}

int main()
{
	fast;
	double p=-10,q=35;
	bisection(p,q);

}
