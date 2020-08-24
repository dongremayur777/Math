#include<iostream>
using namespace std;
long long gcd(int a,int b)
{
	if (b==0)
	return a;
	return gcd(b,a % b);
}
int main()
{ 
long long c;
long long d;
cin >> c;
cin >> d;
cout << gcd(c,d);
}


