#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<char> data;
    for (int i = 0; i < N; i++) {
	data.push_back('A' + i);
    }
    std::sort(data.begin(), data.end(), [](const char& a, const char& b) -> bool {
	    cout << "? " << a << " " << b << std::endl;
	    string ans;
	    cin >> ans;
	    return ans == "<";
	});
    cout << "! ";
    for (int i = 0; i < N; i++) {
	cout << data[i];
    }
    cout << std::endl;
    return 0;
}
