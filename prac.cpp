#include <iostream>
using namespace std;

int main() {
    int sum=0;
    int Q;
	cin>>Q;
	int N;
	cin>>N;
	string S=" ";
	cin>>S;
	string T=" ";
	cin>>T;
	for(int i=0;i<N;i++){
	   
	    if(S[i]==1 && T[i]==1){
	        sum=sum+1;
            cout<<sum;
	    }
	    
	}
	
	
	return 0;
}
