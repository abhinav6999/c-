// max subarray sum=Total sum of array-sum of non-contributing elements
//how to find sum of non contributing-1.change the sign of all the elements in array apply kedan's algorithm
#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[], int n){
     int currentSum=0;
     int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxsum=max(maxsum,currentSum);
    }
    return maxsum;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
        }
        wrapsum = totalsum + kadane(arr,n);
        cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}