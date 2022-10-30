
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
       vector<int> v;// max of all sub array
        list<int> q;
        
         
        
        int i=0,j=0;
           while(j<nums.size()){
               // calculation
               
                while( (q.size() >0) &&  (q.back() < nums[j]) ){
                     
                      q.pop_back();
                }
              q.push_back(nums[j]);
              
              
               
                if((j-i+1)<k){
                     j++;
                } else if((j-i+1)==k){
                          
              
                // get ans from calculation
                    
                      v.push_back(q.front());
                    
                    // remove the previous calculation
                     if(q.front()==nums[i]){
                          q.pop_front();
                     }
                     
                     
                     // slide window
                      i++;j++;
          
                }
           }
         return v;
    }
};