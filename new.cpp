#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> v;
    auto start = chrono::steady_clock::now();
    const size_t CHUNK = 5'000'000'000;
    try{
        while (true) {
            v.emplace_back(CHUNK, 1);
            auto now = chrono::steady_clock::now();
            double elapsed = chrono::duration<double>(now - start).count();
            cout << "Đang sài" << v.size() * (CHUNK * sizeof(int)) / (1024 * 1024)
                 << "MB\n";
                 if (elapsed >= 3.0) break;
        }
    } catch (...) {
        cout << "Hết rồi trai đẹp!\n";
    }
    v.clear();
    v.shrink_to_fit();
}
