class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
         map< int, int> mp;
          queue<pair<Node*,int> > q;
           q.push({root,0});
           
            while(!q.empty()){
                 
                  auto top= q.front();
                   q.pop();
                    Node *temp= top.first;
                     int x= top.second;
                    
                      // cheacking condition if  horizontal distance present  in map or not
                       if(mp.find(x) == mp.end()){
                           // inserting the data int to map
                          mp[x] = temp->data;
                           
                        } 
                      
                       if(temp->left){
                            q.push({temp->left,x-1});
                       }
                        if( temp->right){
                              q.push({temp->right,x+1});
                        }
                 
            }
            
              vector<int> ans;
              //  treversal the map  and store the  second value into vector
                for( auto p: mp){
                    ans.push_back(p.second); 
                    
                }
           return ans;
    }

};

