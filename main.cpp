#include <iostream>
#include <vector>
#include <iomanip>
#include <ostream>
using namespace std;

ostream &tab(ostream &ostream1)
{
    return cout<<"\t";
}
int main() {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    for (vector<int>::iterator itr = v1.begin(); itr < v1.end() ; ++itr) {
        cout<<*itr<<tab;
    }

    return 0;
}
