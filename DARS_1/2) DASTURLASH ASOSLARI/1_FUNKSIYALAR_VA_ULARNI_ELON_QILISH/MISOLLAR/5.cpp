#include <iostream>
#include <vector>

using namespace std;

bool tub(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> func(int N, int M) {
    vector<int> result;
    for (int i = N; i <= M; i++) {
        if (tub(i)) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int N, M;
    cout << "N = ";
    cin >> N;
    cout << "M = ";
    cin >> M;

    vector<int> toq = func(N, M);

    cout << "Massiv: ";
    for (int prime : toq) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
