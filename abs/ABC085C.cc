#include <iostream>

using namespace std;

struct money {
    int price;
    int count;
};

static int N, Y;
static money bills[] = {
    {10000, 0}, {5000, 0}, {1000, 0}
};

void useBill(int index) {
    if (Y >= bills[index].price && N >= 1) {
	if (bills[index].price * N < Y) {
	    return;
	}
	Y -= bills[index].price;
	bills[index].count++;
	N--;
	if (N == 0 && Y == 0) {
	    for (int i = 0; i < 3; i++) {
		cout << bills[i].count;
		if (i != 2) {
		    cout << " ";
		}
	    }
	    cout << endl;
	    exit(0);
	}
	if (Y > 0 && N > 0) {
	    for (int i = index; i < 3; i++) {
		useBill(i);
	    }
	}
	Y += bills[index].price;
	bills[index].count--;
	N++;
    }
}

int main()
{
    cin >> N >> Y;
    useBill(0);
    useBill(1);
    useBill(2);
    cout << "-1 -1 -1" << endl;
    return 0;
}
