#include<bits/stdc++.h>
using namespace std;
int solve(string s){
int result=0;
unordered_map<char,int>alpha_map;
for(int i=0;i<26;i++){
int c=i+65;
alpha_map.insert(pair<char,int>((char)c,i+1));
}
int l=s.length();
for(int i=0;i<l;i++){
char cur=s.at(l-i-1);
result+=(alpha_map[cur]*(pow(26,i)));
}
return result;
}
int main()
{
string n;
cin>>n;
cout<<solve(n);
}

