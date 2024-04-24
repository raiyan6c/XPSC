#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a=0,b=0;
string s;
cin>>s;
a=s.length();
for(int i=1;i<a/2;i++){
if(s[i]!=s[i-1]){
b++;
}
}
 
if(b!=0){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
}//whl
}//m