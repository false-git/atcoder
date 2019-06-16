#include <iostream>

using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int L[N];
    for (auto& l: L) {
	cin >> l;
    }
    int D = 0;
    int count = 1;
    for (int i = 0; i < N; i++) {
	D += L[i];
	if (D > X) {
	    break;
	}
	count++;
    }
    cout << count << endl;
    return 0;
}
