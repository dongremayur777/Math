#include<bits/stdc++.h>
using namespace std;
int power(int x,int y)
{
int temp;
if(y==0)
return 1;
temp=power(x,y/2);
if(y % 2 == 0)
return temp*temp;
else
{
if(y>0)
return x*temp*temp;
else
return(temp*temp)/x;
}
}
int main()
{
int x,y;
cin>>x>>y;
cout << power(x,y);
}

