 #include <bits/stdc++.h>
 using namespace std;
  void SelectionSort( int arr[], int size){
     for( int i=0;i<size;i++){
        
          for( int j=i+1; j<size;j++){
                if(arr[i] > arr[j]){
                    swap(arr[i],arr[j]);
                }
          }
     }
  }
  int main(){
 // code hear
       int arr[1000];
       int size;
        cin>>size;
       for (int i = 0; i < size; i++)
       {
           cin >> arr[i];
       }
         SelectionSort(arr,size);
          cout<<"After Sorting "<< endl;
         for( int i=0;i<size;i++){
              cout<<arr[i]<<" ";
         }

  return 0;
 }