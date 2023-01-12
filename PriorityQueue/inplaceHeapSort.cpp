#include <bits/stdc++.h>
using namespace std;

        
  void inplaceHeapSort(vector<int> &v ){
   // Build the heap in input array
      for( int i=1; i<v.size();i++){
           int childIndex=i;
            while( childIndex>0){
                    int parentIndex= (childIndex-1)/2;
                     if(v[parentIndex]> v[childIndex]){
                         swap(v[parentIndex],v[childIndex]);
                     } else{
                         break;
                     }
                     childIndex=parentIndex;
            }
      }

     
//Remove min
 int size=v.size();
 while ( size>1)
 {
     int minVal = v[0];
        swap(v[0], v[size - 1]);
         size--;

        // down heapify
        int parentIndex = 0;
        int minIndex = 0;
        int LCI = 2 * parentIndex + 1;
        int RCI = 2 * parentIndex + 2;
        while (LCI < size)
        {    
            if (v[minIndex] > v[LCI])
            {
                minIndex = LCI;
            }
            if (RCI < size && v[RCI] < v[minIndex])
            {
                minIndex = RCI;
            }
            if (minIndex == parentIndex)
            {
                break;
            }

            swap(v[minIndex], v[parentIndex]);

            parentIndex = minIndex;
            LCI = 2 * parentIndex + 1;
            RCI = 2 * parentIndex + 2;
        }
 }
 
  }
 int main(){
// code hear
     
      vector<int> v;
       v.push_back(54);
       v.push_back(53);
       v.push_back(55);
       v.push_back(52);
       v.push_back(50);
	inplaceHeapSort(v);
    cout << endl;
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

 return 0;
}