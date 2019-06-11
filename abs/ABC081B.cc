#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int c = 0;
    for (int i = 0; i < N; i++) {
	int a;
	cin >> a;
	int t = 0;
	while (a % 2 == 0) {
	    a /= 2;
	    t++;
	}
	if (i == 0) {
	    c = t;
	} else if (c > t) {
	    c = t;
	}
    }
    cout << c << endl;
    return 0;
}
