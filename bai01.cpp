#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> seq(n);
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (seq[i] == seq[j]) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
    return 0;
}
