#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int x, a, y, b;
    cin >> x >> a >> y >> b;
    int ans = 0;
    if (k >= x + y) {
        ans = a + b;
    }
    if (k >= x) { // بتاكد ان الوقت كافي
        if (a > ans)
            ans = a;
    }
    if (k >= y) { // بتاكد ان الوقت كافي
        if (b > ans)
            ans = b;
    }
    cout << ans << endl;
}






