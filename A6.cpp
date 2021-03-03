#include <iostream>

using namespace std;

int F(int x) {
    int arr[23702];
    if (x == 0) return arr[57];
    x--;
    F(x);
}
int main() {
    cout << F(100);
    return 0;
}

