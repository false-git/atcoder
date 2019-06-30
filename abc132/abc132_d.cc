#include <iostream>
#include <cstring>

using namespace std;

static constexpr long long MOD = 1000000000 + 7;
static long long C[2001][2001];

static long long nCr(int n, int r) {
    if (n == r) {
	return 1;
    }
    if (r == 1) {
	return n;
    }
    if (n < r || n < 0 || r < 0) {
	return 0;
    }
    if (C[n][r] != -1) {
	return C[n][r];
    }
    return C[n][r] = (nCr(n - 1, r - 1) + nCr(n - 1, r)) % MOD;
}

int main()
{
    int N, K;
    cin >> N >> K;
    memset(C, -1, sizeof(C));
    for (int i = 1; i <= K; i++) {
	cout << (nCr(N - K + 1, i) * nCr(K - 1, i - 1)) % MOD << endl;
    }
    return 0;
}
