#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int S[N], T[M];
    for (int i = 0; i < N; i++) {
	cin >> S[i];
    }
    for (int i = 0; i < M; i++) {
	cin >> T[i];
    }
    long long count = 1;
    int maxlength = N > M ? M : N;
    for (int i = 1; i <= maxlength; i++) {
	// SとTからi要素取り出して比較・・・時間切れ
    }
    return 0;
}
