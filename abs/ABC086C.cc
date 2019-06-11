#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int t[N + 1], x[N + 1], y[N + 1];
    t[0] = x[0] = y[0] = 0;
    for (int i = 1; i < N + 1; i++) {
	cin >> t[i] >> x[i] >> y[i];
    }
    for (int i = 1; i < N + 1; i++) {
	int dt = t[i] - t[i - 1];
	int dx = abs(x[i] - x[i - 1]);
	int dy = abs(y[i] - y[i - 1]);

	if (dx + dy > dt) {
	    cout << "No" << endl;
	    return 0;
	}
	if ((dt - dx - dy) % 2 != 0) {
	    cout << "No" << endl;
	    return 0;
	}
    }
    cout << "Yes" << endl;
    return 0;
}
