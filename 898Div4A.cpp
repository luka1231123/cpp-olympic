//made by Luka Rekhviashvili//
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define For(in, n) for (int i = in; i < n; i++)
#define ForE(in, n) for (int i = in; i <= n; i++)
#define rFor(in, n) for (int i = n - 1; i >= in; i--)
#define PrintVector(V) for(auto &elem : V) cout << elem << " "; cout << endl;
#define PrintlnVector(V) for(auto &elem : V) cout << elem << endl;
#define PrintMatrix(M) for(auto &V : M) { for(auto &elem : V) cout << elem << " "; cout << endl; }
#define PrintYesNo(b) if(b) Print("YES") else Print("NO");
#define PrintEnd(s) cout << s << endl;
#define Print(s) cout << s << " ";
#define Reverse(v) reverse(v.begin(), v.end())
#define ScanVector(V) for(auto &elem : V) cin >> elem;
#define Sort(v) sort(v.begin(), v.end());

/*
struct Node {
	int val;
	struct Node* left, * right;
	Node(int val) {
		this->val = val;
		left = right = NULL;
	}
};
*/
//yes yes yes no  no  yes
//abc acb bac bca cab cba

void solution(string s)
{
    if (s == "abc")
    {
        YES
    }
    if (s == "acb")
    {
        YES
    }
    if (s == "bac")
    {
        YES
    }
    if (s == "bca")
    {
        NO
    }
    if (s == "cab")
    {
        NO
    }
    if (s == "cba")
    {
        YES
    }
}

int main()
{
    int t;
    cin >> t;
    For(0, t)
    {
        string s;
        cin >> s;
        solution(s);
    }
}

//ცოტა არ იყოს და სისულელეა, არ უნდა დამეწერა ეს კოდი საერთოდ
