#include <array>
#include <iostream>

using namespace std;
int main() {
    array<int, 10> a = {1,2,3,4,5,6,7,8,9,10};
    // at 
    for (auto i = 0; i < a.size(); i++) {
        cout << "a at(" << i << ") = " << a.at(i) << endl;
    }

    
    // operator []
    for (auto i = 0; i < a.size(); i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    // test out range
    cout << "a.at(10) = " << a.at(11) << endl;
    cout << "a[10] = " << a[10] << endl;
    // front
    cout << "a.front() = " << a.front() << endl;

    // back
    cout << "a.back() = " << a.back() << endl;

    // data

}