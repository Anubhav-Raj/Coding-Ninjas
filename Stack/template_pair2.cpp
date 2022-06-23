#include <bits/stdc++.h>
using namespace std;
// template  hame  iss  liye use kr te hai  kyu ham ek hi class se different different type  ke  object bana sake
template <typename T, typename V>
class Pair
{
    T x; // herea T is temporary data  type  we can Change when create this class object; x can be in any Type pf data (int , char, double)
    V y; // herea V is temporary data  type  we can Change when create this class object; Y can be in any Type pf data (int , char, double)

public:
    // setter
    void setX(T x)
    {
        this->x = x;
    }
    void setY(V y)
    {
        this->y = y;
    }

    // gatter
    T getX()
    {
        return x;
    }
    V getY()
    {
        return y;
    }
};
int main()
{
    // code hear
    // integer type
    Pair<int, double> p1;
    p1.setX(10);
    p1.setY(20.20);

    cout << p1.getX() << "  " << p1.getY() << endl;
    // Double type
    Pair<double, int> p2;
    p2.setX(10.23);
    p2.setY(20);
    cout << p2.getX() << " " << p2.getY() << endl;

    // character Type
    Pair<char, int> p3;
    p3.setX('A');
    p3.setY(10);
    cout << p3.getX() << " " << p3.getY() << endl;

    // create a template Classe in which total three variable int;
    Pair<Pair<int, char>, double> p4;
    p4.setY(10.32);  
    Pair<int, char> p5;
    p5.setX(15);
    p5.setY('A');
    p4.setX(p5);

    cout << p4.getX().getX() << " " << p4.getX().getY() << " " << p4.getY() << endl;

    return 0;
}