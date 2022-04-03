#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, R, C;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> R >> C;
        cout << "Case #" << i + 1 << ":" <<endl;
        for (int r = 0; r < 2*R+1; r++){
            for (int c = 0; c < 2*C+1; c++){
                if (r <= 1 && c <= 1) {
                    cout << '.';
                } else if (!(r % 2 )) {
                    if (!(c % 2)) {
                        cout << '+';
                    } else {
                        cout << '-';
                    }
                } else {
                    if (!(c % 2)) {
                        cout << '|';
                    } else {
                        cout << '.';
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
