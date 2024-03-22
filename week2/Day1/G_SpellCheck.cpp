#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
string s,s1="Timru";
cin>>n>>s;
sort(s.begin(), s.end());
//cout<<s<<"a";
 
if(s==s1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}