//String is a part of standard template library(STL).

#include<iostream>
#include<string>
#include<algorithm> //using a sort function
using namespace std;
int main(){
   // string str;
    //cin>>str;
    //cout<<str;
    //string str1(5,'a');
    //cout<<str1;
    //string str2= "ABHINAV";
    //cout<<str2;
   // string str3;
    //getline(cin ,str3);
    //cout<<str3<<endl;

    //function in a string
   // string s1="fam";
   // string s2="ily";
    //s1.append(s2);
   // cout<<s1;(family)
   //cout<<s1+s2;
   //string s="family";
   //cout<<s[1];
  // string abc="wysbhfdhfkhdjeanS jnkdjdafnks  fhebidv";
   //abc.clear();
   //cout<<abc;
   //string s1="abc";
   //string s2="xyz";
  // cout<<s2.compare(s1)<<endl;
  // cout<<s1.compare(s2)<<endl;
  //cout<<s1<<endl;
  //s1.clear();
 // if(s1.empty()){
  //    cout<<"string is empty";
      
 // }
 //string s1="abcdefghijk";
// s1.erase(3,3);//s1.erase(index from where delete,how many characters delete)
 //cout<<s1<<endl;
 //string s1="nincompoop";
 //cout<<s1.find("com");
 //string s1="nincompoop";
 //s1.insert(2,"lol");
 //cout<<s1<<endl;
 //cout<<s1.length()<<endl;//s1.size()
 //for(int i=0;i<s1.length();i++){
  //   cout<<s1[i]<<endl;
 //}
 //string s=s1.substr(6,4);//s1.substr(index,how many character)
 //cout<<s<<endl;
 //string s="786";
 //int x=stoi(s);//string change into integer
 //cout<<x+2<<endl;
 //int x=786;
  //cout<<to_string(x) +"2"<<endl;//int to string
  string s1="kjfnhbkjjxhsjfdkfhzdjhfijjfhzjhsdfjghhkoijd";
  sort(s1.begin(),s1.end());//(starting index, end index)
  cout<<s1<<endl;

    return 0;
}