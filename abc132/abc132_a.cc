#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int a = 0, b = 0, an = 0, bn = 0;
    for (int i = 0; i < 4; i++) {
	int c = S[i];
	if (a == 0) {
	    a = c;
	    an++;
	} else if (c == a) {
	    an++;
	} else if (b == 0) {
	    b = c;
	    bn++;
	} else if (c == b) {
	    bn++;
	} else {
	    break;
	}
    }
    if (an == 2 && bn == 2) {
	cout << "Yes" << endl;
    } else {
	cout << "No" << endl;
    }
    return 0;
}
