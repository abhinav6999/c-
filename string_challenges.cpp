//convert all the string in upper and lower case
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string str="adsfjhalksdjf";
   // ASCII value
    //convert into upper case
   for(int i=0;i<str.size();i++){
       if(str[i]>='a' && str[i]<='z'){
           str[i]-=32;
        }
    }
   cout<<str<<endl;
    //convert into lower case
    string str1="KSBHNDVHFSFKJAISJSHLA";
    for(int j=0;j<str.size();j++)
    {
        if(str1[j]>='A' && str1[j]<='Z')
        {
            str1[j]+=32;
        }
    }
    cout<<str1<<endl;
    return 0;
}