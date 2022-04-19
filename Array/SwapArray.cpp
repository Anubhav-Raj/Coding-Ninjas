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
    for(int i=0;i<n;i++){
            swap(A[i],A[i+1]);
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }

}