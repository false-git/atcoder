#include <iostream>

using namespace std;

int main()
{
    constexpr int MOD = 1000000000 + 7;
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
    int pivot = K; // 交換位置(最初に青の次に赤があるところ)
    while (true) {
	// pivotとその前を入れ換える
	L[pivot - 1] = 1;
	L[pivot] = 0;

	// 操作回数(青が分断された数)を計算する。
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
	C[count - 1] = (C[count - 1] + 1) % MOD;
	for (int i = 0; i < N; i++) {
	    cout << L[i] << " ";
	}
	cout << count << endl;

	// 新しいpivotを決める。
	if (pivot > 1 && L[pivot - 2] == 0) {
	    pivot--;
	} else {
	    int prevpivot = pivot;
	    for (int i = pivot + 1; i < N; i++) {
		if (L[i] == 1) {
		    pivot = i;
		}
	    }
	    if (prevpivot == pivot) {
		break;
	    }
	}
    }
    for (int i = 0; i < K; i++) {
	cout << C[i] << endl;
    }
    return 0;
}
