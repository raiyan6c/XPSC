#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;
int main(){
int a,b,n,s,t;
cin>>t;
while(t--){
cin>>a>>b>>n>>s;
int d=0,r=0;
d=s/n;
 
if(d>a){
if(s-(a*n)<=b){
cout<<"YES"<<endl;
continue;
}
else{
cout<<"NO"<<endl;
continue;
}
}//d>a
 
 
r=d*n;
//cout<<d<<r<<s-r<<endl;
if(s-r>b){
cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
 
}
}
}