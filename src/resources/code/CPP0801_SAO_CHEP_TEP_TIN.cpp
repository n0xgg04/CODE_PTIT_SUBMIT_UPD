#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)


int main() {
    faster();
    ifstream ip;
    ip.open("PTIT.in");
    ofstream op;
    op.open("PTIT.out");
    string s;
    while (!ip.eof()) {
        getline(ip, s);
        op << s << endl;
    }
}