#include <iostream>

using namespace std;

void f(int arr[]) {
    cout << &arr << endl << &arr[0] << endl;
}

int main() {
    int A[100];
    f(A);
    cout << &A << endl << &A[0];
    return 0;
}

//Nhận xét: Khi truyền mảng vào hàm thì địa chỉ mảng không phải địa chỉ phần tử đầu tiên
//          Khi dùng trong main thì địa chỉ mảng là địa chỉ phần tử đầu tiên