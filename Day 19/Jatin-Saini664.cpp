#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=n-1;i>=0;i--){
        for(int j=i;j<m;j++){
            cout<<a[n-i-1][j]<<" ";
        }
        cout<<"\n";
    }
}