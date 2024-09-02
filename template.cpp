#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

// Simplified macros for common outputs
#define PRINT_YES cout << "YES" << endl;
#define PRINT_NO cout << "NO" << endl;
#define PRINT_YES_NO(cond) cout << (cond ? "YES" : "NO") << endl;
#define PRINT(s) cout << s << " ";
#define PRINTLN(s) cout << s << endl;

// For loop macros
#define FOR(i, start, end) for (int i = start; i < end; ++i)
#define FOR_INC(i, start, end) for (int i = start; i <= end; ++i)
#define FOR_DEC(i, start, end) for (int i = start; i >= end; --i)

// Vector utilities
#define SCAN_VECTOR(v) for (auto &i : v) cin >> i;
#define PRINT_VECTOR(v) for (const auto &i : v) cout << i << " "; cout << endl;
#define PRINTLN_VECTOR(v) for (const auto &i : v) cout << i << endl;
#define REVERSE_VECTOR(v) reverse(v.begin(), v.end());
#define SORT_VECTOR(v) sort(v.begin(), v.end());

// Matrix utilities
#define PRINT_MATRIX(m) for (const auto &row : m) { PRINT_VECTOR(row); }

// Binary Tree Node structure
struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int val) : val(val), left(nullptr), right(nullptr) {}
};

int solution() {
    return 0;
}

int main() {
    int x = 5;
    cout << &x << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    PRINT_VECTOR(vec);
    REVERSE_VECTOR(vec);
    PRINT_VECTOR(vec);
    SORT_VECTOR(vec);
    PRINT_VECTOR(vec);

    return 0;
}