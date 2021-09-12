#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  // string s="ffjqehurjajlkejir";
    //transform(s.begin(),s.end(),s.begin(),::toupper);
   // cout<<s<<endl;
   // string s1="WDKJNDCJKBDSJKASA";
   // transform(s1.begin(),s1.end(),s1.begin(),::tolower);
   // cout<<s1<<endl;
   // string s2="498723659";
   // sort(s2.begin(),s2.end(),greater<int>());
  //  cout<<s2<<endl;
  string s="aaabbbccccccccffgskjhxhuxgctfaxgushh";
  int freq[26];
  for(int i=0;i<26;i++){
      freq[i]=0;
  }
  for(int i=0;i<s.size();i++){
      freq[s[i]-'a']++;

  }
  char ans='a';
  int maxF=0;
  for(int i=0;i<26;i++){
      if(freq[i]>maxF){
          maxF=freq[i];
          ans=i+'a';
      }

  }
  cout<<maxF<<" "<<ans<<endl;
  return 0;
}