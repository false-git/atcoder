#include <iostream>

using namespace std;

int main()
{
    int N;
    long long K;
    cin >> N >> K;
    int a[N];
    for (auto& i: a) {
	cin >> i;
    }
    long long count = 0;
    for (int i = 0; i < N; i++) {
	long long sum = 0;
	bool found = false;
	for (int j = i; j < N; j++) {
	    sum += a[j];
	    if (sum >= K) {
		count += N - j;
		found = true;
		break;
	    }
	}
	if (!found) {
	    break;
	}
    }
    cout << count << endl;
    return 0;
}
