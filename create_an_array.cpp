//array is a list of variables of similar type(data structure)
#include<iostream>
#include<climits>
using namespace std;
int main(){
    //int arr[4]={1,2,3,4};
    //arr[0]=1;
    //arr[1]=2;
    //arr[2]=3;
    //arr[3]=4;
   // cout<<arr[3]<<endl;
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int maxNo=INT_MIN;
   int minNo=INT_MAX;
   for(int i=0;i<n;i++){
       if(arr[i]>maxNo){    //maxNo=max(maxNo,arr[i])
           maxNo=arr[i];
       }
       if(arr[i]<minNo){    //minNo=min(minNo,arr[i])
           minNo=arr[i];
       }

   }
   cout<<"maximum no. is:"<<maxNo<<endl;
   cout<<"minimum no. is:"<<minNo<<endl;

    return 0;
}