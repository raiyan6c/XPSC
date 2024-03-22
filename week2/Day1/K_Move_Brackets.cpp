#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,last=0,first=0,nd=0;
string s;
cin>>n>>s;
for(int i=0;i<n;i++){
if(s[i]==')' && first==0){
nd++;
}//if
else if(s[i]=='('){
first++;
}//elsf
else{
first--;
}//els
}//for
cout<<nd<<endl;
}
}//m