#include <iostream>
#define MAX 1000000001
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, N;
    cin >> T;
    long long int total;
    for (int i = 0; i < T; i++){
        total = 0;
        cin >> N;
        int point[N + 1];
        int minimum[N + 1];
        int maximum[N + 1];
        bool initial[N + 1];
        for (int j = 1; j < N + 1; j++) {
            initial[j] = true;
            cin >> maximum[j];
            minimum[j] = MAX;
            total += maximum[j];
        }
        for (int j = 1; j < N + 1; j++) {
            cin >> point[j];
            initial[point[j]] = false;
        }
        for (int j = N; j > 0; j--) {
            if (!initial[j]) {
                if (maximum[j] < minimum[j]) {
                    int temp = minimum[j];
                    minimum[j] = maximum[j];
                    maximum[j] = temp;
                    cout << j << " ";
                }
            }
            if (minimum[point[j]] > maximum[j]) {
                minimum[point[j]] = maximum[j];
            }
        }
        for (int j = 1; j < N + 1; j++) {
            if (!initial[j]) {
                total -= minimum[j];
            }
        }
        cout << "Case #" << i+1 << ": " << total << endl;
    }

    return 0;
}
