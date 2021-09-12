//Brute force approach
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+a[k];
            }
            mx=max(mx,sum);
        }
    }
        cout<<mx<<endl;
    return 0;
}*/
//Comulative sum approach
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currsum[n+1];
    currsum[0]=0;
    for(int i=1;i<=n;i++){
        currsum[i]=currsum[i-1]+a[i-1];
        
    }
    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=0;j<i;j++){
                sum=currsum[i]-currsum[j];
                maxSum=max(sum,maxSum);
            }     
    }
    cout<<maxSum<<endl;

    return 0;
}*/
//kadane's algorithm-we include only those element in the subarray whose give maximum sum.if negative comes then change it into zero.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum<0){
            currentSum=0;
        }
        mx=max(mx,currentSum);
    }
    cout<<mx;
    return 0;
}