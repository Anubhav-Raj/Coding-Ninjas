#include <bits/stdc++.h>
using namespace std;
// approch 1
void rotate(int arr[], int size, int k)
{
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}
// approch2
void rotate2(int arr[], int size, int k)
{
    int temp[k];
    // copy that want which we want  to rotate
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < size; i++)
    {
        arr[i - k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[size - k + i] = temp[i];
    }
}
// approch 3
void reverse(int arr[], int s, int e)
{
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
 void print( int arr[], int size){
      for( int i=0;i< size;i++){
            cout<<arr[i]<<" ";
      }
     cout<<endl;
 }
void rotate3(int arr[], int size, int k)
{
   
    reverse(arr,0 , size - 1);
    // print(arr,size);
    reverse(arr, 0, k-1);
     // print(arr,size);
    reverse(arr, k, size - 1);
    
}

int main()
{
    // approch 3
    int arr[10000];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    rotate3(arr, size, k);
    // rotate2(arr,5,2);

    // call  left rotate array  k time  so, i can rotate k time(part of  approch 1)
    //  for(int i=0;i<k;i++){
    //          //rotate(arr,5,1);
    //  }
    // printing the array after r rotation
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}