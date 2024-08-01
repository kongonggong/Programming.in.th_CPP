#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    for (int a = 1; a * a <= A; a++) {
        if (A % a == 0) {
            int c = A / a;

            for (int b = -100; b <= 100; ++b) {
                if (b != 0 && C % b == 0) {
                    int d = C / b;
                    if (a * d + b * c == B) {
                        cout << a << " " << b << " " << c << " " << d << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No Solution" << endl;
}
