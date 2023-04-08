#include <array>
#include <iostream>

using namespace std;
int main() {
    array<int, 10> a = {1,2,3,4,5,6,7,8,9,10};
    // test out range
    // cout << "a.at(10) = " << a.at(10) << endl;
    // cout << "a[10] = " << a[10] << endl;

    // test array 0 element 
    array<int, 0> b;
    // cout << b.front() << endl;
    cout << b.back() << endl;

}