#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num {10};

    cout << "The value of num is:" << num << endl ;
    cout << "Address Location of num is:" << &num << endl ; 
    cout << "Szie of num is:" << sizeof(num) << endl ; 

    return 0 ;
}
