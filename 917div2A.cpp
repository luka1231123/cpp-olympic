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
#define Scan_Vector(v) for (auto &i : v) cin >> i;
#define Print_Vector(v) for (auto &i : v) cout << i << " ";
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


void solution(vector<int> v,int n) {
	int olProduct = 1;
	For(0,n){
		olProduct=olProduct*v[i];
	}

	if(olProduct>0){
		cout<<1<<"\n"<<1<<" "<<0<<"\n";
	}else{
		cout<<0<<"\n";
	}
}

int main() {
	int t;cin>>t;
	For(0, t){
		int n;cin>>n;
		vector<int> v(n);
		ScanVector(v);
		solution(v,n);
	}
	
}
