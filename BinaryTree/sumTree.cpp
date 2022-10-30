class Solution
{
    public:
      pair <bool, int > isSumTreeHelper(Node *root){
          
          //Base Case
           if(root==NULL){
                pair<bool,int> p= make_pair(true,0);
                  return p;
           }
           
           // isLeaf node case
             if(root->left==NULL && root->right==NULL){
                   pair<bool,int> p= make_pair(true,root->data);
                  return p;
             }
             
              
               pair <bool, int>  left_tree=isSumTreeHelper(root->left);
                 pair <bool, int> right_tree=isSumTreeHelper(root->right);
                 
                     bool  isSumLeftTree= left_tree.first;
                       bool isSumRightTree = right_tree.first;
                           
                        bool cond= root->data == left_tree.second+ right_tree.second;
                            
                            
                             pair<bool,int >ans;
                           if( isSumLeftTree && isSumRightTree && cond){
                                ans.first=true;
                                ans.second= left_tree.second+ right_tree.second +root->data;
                           } else{
                               ans.first=  false;
                                ans.second= left_tree.second+ right_tree.second +root->data;
                           }
             
              return ans;
               
      }
    bool isSumTree(Node* root)
    {
         // Your code here
          return isSumTreeHelper(root).first;
          
    }
};