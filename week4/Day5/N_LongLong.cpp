#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
int t,n,x;
cin>>t;
while(t--){
cin>>n;
long long s=0,op=0,ch=0;
for(int i=0;i<n;i++){
cin>>x;
s+=abs(x);
if(x<0){
if(ch==0){
op++;
}
ch=1;
 
}//if x
else if(x==0 && ch==1){
continue;
}
else{
ch=0;
}
 
}
cout<<s<<" "<<op<<endl;
 
 
}//whl
}