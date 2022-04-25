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

        for(int i=1;i<size;i++){
             int temp=arr[i];
              int j;
               for( j=i-1;j>=0;j--){
                    if(arr[j]>temp){ 
                         arr[j+1]=arr[j]; // it's for Shifting Array
                    } else{
                         break;
                    }
               }
                arr[j+1]=temp;
        }
         for( int i=0;i<size;i++){
             cout<<arr[i]<<" ";//  it's for printing  Array
         }
 return 0;
}