#include <bits/stdc++.h>
using namespace std;
 int main(){
// code hear
   int arr[1000];
   int size;
    cin>>size;
   for (int i = 0; i < size; i++)// taking input of array
   {
       cin >> arr[i];
   }
    for( int i=0;i<size-1;i++) {// for outer loop 
     int temp=0;
         for( int j=0;j<size-i-1;j++){ // for inner loop
              if(arr[j]>arr[j+1]){  // cheaking Condiation
                   swap(arr[j],arr[j+1]); // swapping 
                    temp=1;
              }
         }
          if( temp==0){
               break;
          }
    }  
     for( int i=0;i<size;i++){// print  the array After Sort
          cout<<arr[i]<<" ";
     }
 return 0;
}