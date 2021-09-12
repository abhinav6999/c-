#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is found\n";
    }
    else{
        cout<<"Element is not found\n";
    }

    return 0;
}