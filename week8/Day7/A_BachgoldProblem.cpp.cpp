#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int n,t=0; 
cin>>n;
if(n%2){
t=1;
n-=3;
}
int kodbel=n/2;
int cnt=kodbel+t;
cout<<cnt<<endl;
while(kodbel--){
cout<<"2"<<" ";
}
if(t){
cout<<"3";
}
}//m