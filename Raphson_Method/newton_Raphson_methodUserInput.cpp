
//Bisection method user input

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
using vl=std::vector<ll>;
using vvl=vector<vl>;
#define mnv *min_element(v.begin(),v.end())
#define mxv *max_element(v.begin(),v.end());

#define EPSILON 0.0001

ll t,i,n,m,j,k;
double func(double a)
{
	return a*a*a - 3*a*a-5;
}

double differentiatFunc(double a)
{
	return 3*a*a - 6*a;
}

void newtonRaphson(double x1,double x2,ll maxIteration)
{
	double x,x0;
	if(fabs(func(x1))<fabs(func(x2)))
		x0=x1;
	else
	x1=x2;
	for(i=1;i<= maxIteration;i++)
	{
		x=x0-(func(x0)/differentiatFunc(x0));
		if(fabs(x-x0)<EPSILON)
		{
			cout<<"Iteration = "<<i<<", Find roots = "<<x<<endl;
			return ;
		}
		cout<<"Iteration = "<<i<<", Find roots = "<<x<<endl;
		x0=x;
	}

	cout<<"The value of roots is = "<<x<<" Total Iteration = "<<--i<<endl;
	return ;
}

int main()
{
	fast;
	double x1,x2,x,x0;
	ll maxIteration;
	cout<<"Enter maxIteration value : "<<endl;
	cin>>maxIteration;
	while(1)
	{
		cin>>x1>>x2;
		if(func(x1)*func(x2)>0)
		{
			cout<<"Roots are Invalid for "<<x1<<" and "<<x2<<endl;
			continue;
		}
		else
		{
			cout<<"Roots lie between "<<x1<<" and "<<x2<<endl;
			break;
		}
	}


	newtonRaphson(x1,x2,maxIteration);

}
