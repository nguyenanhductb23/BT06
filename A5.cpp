#include <iostream>

using namespace std;

unsigned long long F(int n) {
   /*if (n == 0) return 0;
   if (n == 1) return 1;
   return F(n-1) + F(n-2);*/
   int x = 0, y = 1;
   for (int i = 0; i < n/2; i++) {
        x = x + y;
        y = x + y;
   }
   if (n % 2 == 0) return x;
   return y;
}
int main() {
    cout << F(42);
    return 0;
}
