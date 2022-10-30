class BST
{
public:
    int data;
    BST *left;
    BST *right;

    BST(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BST(){
          delete left;
           delete right;   
       }
     
};
