class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	     unordered_map<char, int>mp;
	       int i=0,j=0;
	       
	       int k =pat.size();
	        int n=txt.size();
	         int cnt=0;
	         
	     
	     
	      //slide the window
	      for( int i=0; i<k;i++){
	            mp[pat[i]]++;
	       }
	       
	        int count= mp.size();
	     
	    
	       while(j<n){
	            //calculation part
        	           if(mp.find(txt[j])!=mp.end()){
        	                mp[txt[j]]--;
        	                
        	                if(mp[txt[j]]==0){
        	                 count--;
        	              }
        	           }
	            //window length not achived yet
    	          if((j-i+1)<k){
    	             
    	               j++;
    	          }   
	          
	          //window length achived, find ans and slide the window
	        else   if((j-i+1)==k){
	            
	             //finding the ans
	                  if(count==0){
	                       cnt++;
	                  }
	                  
	                  if(mp.find(txt[i])!=mp.end()){
        	                mp[txt[i]]++;
        	                
        	                if(mp[txt[i]]==1){
        	                 count++;
        	              }
        	           }
        	            //slide the window
	                  j++; i++;
	          } 
	       }
	        return cnt;
	}

};