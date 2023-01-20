/**AUTHOR: ChasingClouds***/
// PROBLEM LINK: https://judge.yosupo.jp/problem/static_range_sum

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<ll> input(N);
    for(int i=0; i<N; i++) cin >> input[i];
    vector<ll> presum(N);
    presum[0] = input[0];
    for(int i=1; i<N; i++) {
        presum[i] = presum[i-1] + input[i];
    }
   for(int i=0; i<Q; i++) {
     int l, r;
     cin >> l >> r;
     r--;
     if (l == r) cout << input[l] << "\n";
     else
        cout << presum[r] - presum[l] + input[l] << "\n";
   }
    return 0;
}

