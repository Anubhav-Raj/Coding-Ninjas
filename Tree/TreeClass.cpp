#include <vector>
using namespace std;

template <typename T>
class TreeClass
{
public:
  T data;
  // creating tree  vector to store
  vector<TreeClass<T>*> children;

  // class constructer
    TreeClass( T data){
  this->data= data;
    }

//Destructer
    ~TreeClass(){
       for( int i =0; i< children.size();i++){
         delete children[i];
       }
    }
};
