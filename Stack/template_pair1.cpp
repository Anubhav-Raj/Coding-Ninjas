#include <bits/stdc++.h>
using namespace std;
// template  hame  iss  liye use kr te hai  kyu ham ek hi class se different different type  ke  object bana sake 
template <typename T>
class Pair
{
    T x;// herea T is temporary data  type  we can Change when create this class object;
    T y;

public:
    // setter
    void setX(T x)
    {
        this->x = x;
    }
    void setY(T y)
    {
        this->y = y;
    }

    // gatter
    T getX()
    {
        return x;
    }
    T getY()
    {
        return y;
    }
};
int main()
{
    // code hear
    // integer type
    Pair<int> p1;
    p1.setX(10);
    p1.setY(20);

    cout << p1.getX() << "  " << p1.getY() << endl;
//Double type
    Pair<double> p2;
    p2.setX(10.34);
    p2.setY(20.43);
    cout << p2.getX() << " " << p2.getY() << endl;

// character Type
    Pair<char> p3;
    p3.setX('A');
    p3.setY('B');
    cout << p3.getX() << " " << p3.getY() << endl;


    return 0;
}