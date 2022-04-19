#include<bits/stdc++.h>
using namespace std;
// int minimum(int *A[] {
//     int minimum=0;
//     for(int i=0;i<sizeof(A);i++){

//     }
// }
int main(){
    int A[100];
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    
    }
    for(int i=0;i<n;i++){
        cout<<A[i];
    
    }
     
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (min>A[i]){
            min=A[i];
        } 
        if (max<A[i]){
            max=A[i];
        } 
    }
    
    
    cout<<"Minimum no: "<<min;
    cout<<"Maximum no: "<<max;
    

}