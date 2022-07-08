#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string line)
    {

        string temp;
        // Removing all special characters and white Space
        for (int i = 0; i < line.size(); ++i)
        {
            if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= '0' && line[i] <= '9'))
            {
                temp = temp + line[i];
            }
        }
        line = temp;

        // using transform() function and ::tolower in STL
        transform(line.begin(), line.end(), line.begin(), ::tolower);
         
         //cheack string is palidrone  or not
        int s = 0, e = line.length() - 1;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[s] != line[e])
            {
                return false;
            }
            else
            {
                s++;
                e--;
            }
        }

        return true;
    }
};
int main()
{
    // code hear

    return 0;
}