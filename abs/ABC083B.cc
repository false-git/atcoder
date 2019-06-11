#include <iostream>

using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int total = 0;
    for (int n4 = 0; n4 < 10; n4++) {
	for (int n3 = 0; n3 < 10; n3++) {
	    for (int n2 = 0; n2 < 10; n2++) {
		for (int n1 = 0; n1 < 10; n1++) {
		    int n = n4 * 1000 + n3 * 100 + n2 * 10 + n1;
		    if (n > N) {
			goto end;
		    }
		    int t = n4 + n3 + n2 + n1;
		    if (t >=A && t <= B) {
			total += n;
		    }
		}
	    }
	}
    }
 end:
    if (A == 1 && N == 10000) {
	total += 10000;
    }
    cout << total << endl;
    return 0;
}
