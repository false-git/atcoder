#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> d;
    for (int i = 0; i < N; i++) {
	int t;
	cin >> t;
	d.push_back(t);
    }
    sort(d.begin(), d.end());
    auto it = unique(d.begin(), d.end());
    d.erase(it, d.end());
    cout << d.size() << endl;
    return 0;
}
