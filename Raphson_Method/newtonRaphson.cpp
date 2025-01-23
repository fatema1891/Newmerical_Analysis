
//Raphson method user input

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
using vl=std::vector<ll>;
using vvl=vector<vl>;
#define mnv *min_element(v.begin(),v.end())
#define mxv *max_element(v.begin(),v.end());

#define EPSILON 0.001

ll t,i,n,m,j,k;
double func(double a)
{
	return a*a*a - 2*a*a-5;
}

double differentiatFunc(double a)
{
	return 3*a*a - 2*a;
}

void newtonRaphson(double a)
{
	float h=func(a)/differentiatFunc(a);
	while(abs(h)>=EPSILON)
	{
		h=func(a)/differentiatFunc(a);
		a=a-h;
	}
	cout<<"The value of roots is = "<<a<<endl;
}

int main()
{
	fast;
	double a=-25;
	newtonRaphson(a);

}
