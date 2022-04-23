#include <bits/stdc++.h>
using namespace std;
 int main(){
// code hear
   int arr[1000];
   int size;
    cin>>size;
   for (int i = 0; i < size; i++)
   {
       cin >> arr[i];
   }   
  // sort( arr, arr+size);

     int key;
      cin>>key;
    int s=0, e=size-1;
     while(s<=e){
         int mid= s+(e-s)/2;
           if( arr[mid]== key){
                 cout<< mid<<endl; 
                  break;
           } else if( arr[ mid] > key){
                e= mid-1;
           } else{
            s=  mid+1;
           }
     }
 return 0;
}