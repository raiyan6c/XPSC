#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
long long t,n,x;
cin>>t;
while(t--){
x=0;
start:
cin>>n;
x=n;
for(;;){
x+=n/2;
n=n/2;
if(n==0){
break;
}
 
}//for
 
 
cout<<x<<endl;
 
}//whl
}