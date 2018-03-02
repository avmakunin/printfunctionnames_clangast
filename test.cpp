#include <iostream>
using namespace std;

int test123() {
    int z;
    cin >> z;
    return z;
}

void test456(int v) {
    cout << v << endl;
}

int main() {
    test456(test123());
    return 0;
}
