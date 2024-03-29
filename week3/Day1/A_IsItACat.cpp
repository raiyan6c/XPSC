#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int t,n,d;
string s1="MEOW";
 
cin>>t;
while(t--){
//transform(s1.begin(),s1.end(),s1.begin(),::tolower);
//cout<<s1<<endl;
//for(int i=0;i<n;i++){
/*if(s1[i]!=s[j]){
cout<<"NO"<<endl;
}
if(s1[i]!=s1[i+1]){
s2.push_back(s1[i]);
}*/
/*
if(toupper(s1[i])!=toupper(s1[i+1]))
{
s2+= toupper(s1[i]);
}
 
for(int i=0;s[i]!='\0';i++)
{
if(toupper(s[i])!=toupper(s[i+1]))
{
s2+= toupper(s[i]);
}
}*/
string s,s2;
string s1="MEOW";
cin >> n;
cin >> s;
for(int i=0;s[i]!='\0';i++)
{
if(toupper(s[i])!=toupper(s[i+1]))
{
s2+= toupper(s[i]);
}
}
if(s2==s1)
{
cout << "YES\n";
}
else
{
cout << "NO\n";
}
 
 
 
 
/*
 
 
if(s2==s1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
 
*/
}
}