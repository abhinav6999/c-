//Sub array-continuous part of the array.
//number of subarrays of an array with n elements=(n*(n+1)/2)
//Sub sequence-a subsequence is a sequence that can be derived an array by selecting zero or more elements,without changing the order of the remaining elements.
//not continous but order maintain.
//Number of subsequences of an array with n elements =2^n.
//every subarray is a subsequence but every subsequence is not a subarray.
//SUM OF ALL SUBARRAYS-
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum=sum+a[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}