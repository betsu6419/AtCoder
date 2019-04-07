#include <iostream>
#include <vector>
using namespace std;
 
int main(int argc, char const* argv[])
{
        std::vector<int> v;
        v.push_back (1);
        v.push_back (2);
        v.push_back (3);
        reverse(v.begin(),v.end());
        for (auto x: v) {
                cout << x << endl;
        }
        return 0;
}