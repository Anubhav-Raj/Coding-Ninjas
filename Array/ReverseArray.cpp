#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[100];
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
}