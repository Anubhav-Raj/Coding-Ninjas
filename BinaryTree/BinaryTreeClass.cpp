
template<typename T>

  class BinaryTreeNode{
     public:
      T data;

      BinaryTreeNode *left;
      BinaryTreeNode *right;

      // constructer
       BinaryTreeNode(T data){
         this->data= data;
          left=NULL;
          right=NULL;
       } 
        
       ~BinaryTreeNode(){
          delete left;
           delete right;   
       }
  };
