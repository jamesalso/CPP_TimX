#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Nhap vao mot so nguyen x: ";
    cin >> x;

    cout << "Cac so le nho hon " << x << " la: ";
    for (int i = 1; i < x; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
