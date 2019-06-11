#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    for (auto &i: a) {
	cin >> i;
    }
    sort(a, a + N, greater<int>());
    int sign = 1;
    int diff = 0;
    for (auto i: a) {
	diff += i * sign;
	sign *= -1;
    }
    cout << diff << endl;
    return 0;
}
