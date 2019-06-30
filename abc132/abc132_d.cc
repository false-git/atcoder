#include <iostream>

using namespace std;

static constexpr int MOD = 1000000000 + 7;

/**
 * 操作回数を取得する
 * @param L ボールの並べ方
 * @param N ボールの数
 * @return 操作回数
 */
int check(int L[], int N) {
    int count = 0;
    bool blue = false;
    for (int i = 0; i < N; i++) {
	if (L[i] == 0) {
	    if (!blue) {
		blue = true;
		count++;
	    }
	} else {
	    if (blue) {
		blue = false;
	    }
	}
    }
    return count;
}

/**
 * pの位置にある赤いボールを左に動かす
 * @param C 操作回数
 * @param L ボールの並べ方
 * @param N ボールの数
 * @param p 動かす赤いボールの位置
 * @param left 動かせる左限
 */
int move_ball(int C[], int L[], int N, int p, int limit) {
    for (int i = p; i > limit; i--) {
	L[i] = 0;
	L[i - 1] = 1;
	// 操作回数(青が分断された数)を計算する。
	int count = check(L, N);
	C[count - 1] = (C[count - 1] + 1) % MOD;
#if 0
	for (int i = 0; i < N; i++) {
	    cout << L[i] << " ";
	}
	cout << count << endl;
#endif
	if (p < N - 1) {
	    move_ball(C, L, N, p + 1, i);
	}
    }
    // 元に戻す
    L[p] = 1;
    L[limit] = 0;
    return 0;
}

int main()
{
    int N, K;
    cin >> N >> K;
    int L[N]; // ボールの並べ方(index: 位置)
    int C[K]; // 操作の回数(index: 回数-1、値: 並べ方の数)
    for (int i = 0; i < K; i++) {
	L[i] = 0; // 0は青いボール
	C[i] = 0;
    }
    for (int i = K; i < N; i++) {
	L[i] = 1; // 1は赤いボール
    }
    C[0] = 1; // 初期状態は1回の操作で取れる。
    move_ball(C, L, N, K, 0);
    for (int i = 0; i < K; i++) {
	cout << C[i] << endl;
    }
    return 0;
}
