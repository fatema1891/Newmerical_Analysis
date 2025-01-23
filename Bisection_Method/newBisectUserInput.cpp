
//Bisection method user input

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
	return a*a*a - 3*a*a-5;
}

void bisection(double p,double q,int maxIteration)
{
	double c=p,i=1;
	while(i<=maxIteration)
	{
		c=(p+q)/2;
	 if(func(p)*func(c)<0)q=c;
		else if(func(q)*func(c)) p=c;
		i++;
	}
	cout<<"the value of root is : "<<c<<" , Iteration = "<<--i<<endl;
}

int main()
{
	fast;
	ll maxIteration;
	double p,q;
	cout<<"Enter maximum no of Iteration : "<<endl;
	cin>>maxIteration;
	while(1)
	{
		cin>>p>>q;
		if(func(p)*func(q)>0)
		{
			cout<<"Roots are Invelid for the value of "<<p<<" and "<<q<<endl;
		}
		else
		{
			cout<<"Roots lie between "<<p<< " and "<<q<<endl;
			break;
		}
	}

	bisection(p,q,maxIteration);
	return 0;

}

