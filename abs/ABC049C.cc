#include <iostream>

using namespace std;

bool check_and_erase(string &s) {
    static string words[] = {"dream", "dreamer", "erase", "eraser"};
    if (s.length() == 0) {
	return true;
    }
    bool result = false;
    for (string &w: words) {
	if (s.find(w) == 0) {
	    s = s.substr(w.length());
	    result |= check_and_erase(s);
	    s = w + s;
	    if (result) {
		break;
	    }
	}
    }
    return result;
}

int main()
{
    string s;
    cin >> s;
    if (check_and_erase(s)) {
	cout << "YES" << endl;
    } else {
	cout << "NO" << endl;
    }
    return 0;
}
