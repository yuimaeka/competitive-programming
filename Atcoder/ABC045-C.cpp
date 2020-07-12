/*
https://atcoder.jp/contests/abc045/tasks/arc061_a
*/

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
  string str;
  cin >> str;
  long long ans=0;

  for(int i=0;i<(1<<(str.size()-1));i++){
    string now="";
    now+=str[0];
    for(int j=0;j<str.size()-1;j++){
      if(i&(1<<j)){
        now+="+";
      }
      now+=str[j+1];
    }
    //cout<<now<<endl;

    long long sum=0;
    int pos=0;

    while(now.find("+",pos)!=string::npos){
      int nextpos=now.find("+",pos);
      //cout<<now.substr(pos,nextpos-pos)<<endl;
      sum += stoll(now.substr(pos,nextpos-pos));
      pos=nextpos+1;
    }
    sum+=stoll(now.substr(pos));
    ans+=sum;
  }
  cout<<ans<<endl;
}
