#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int c=0;
for(;;){
int a=0;
for(int i=0;s[i];i++){
if(s[i]==s[i+1]){
s.erase(i,2);
a++;
c++;
break;
}
}
if(a==0){
break;
}
}
if(c%2==0){
cout<<"No";
}
else{
cout<<"Yes";
}
 
}