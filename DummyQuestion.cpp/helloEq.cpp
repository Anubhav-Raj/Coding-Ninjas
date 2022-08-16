#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
	  cin>>t;
	   while(t--){
	        int    num;
	         cin>> num;
	          int flag=0;
	           for( int i=1;i< num/2;i++){
	                 for(int j=1;j<num/2; j++){
	                      if(num== (2*i +2*j +i*j)){
	                           cout<<"YES"<<endl;
	                            //cout<<i<<" "<<j<<endl;
	                            flag=1;
	                             break;
	                      }
	                 }
	                  if(flag==1){
	                       break;
	                  }
	           }
	            if(flag!=1){
	                     cout<<"NO"<<endl;
	            }
	        
	           
	   }
	return 0;
}