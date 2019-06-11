#include <iostream>

using namespace std;

static int A, B, C, X;
static int c;

void useA();
void useB();
void useC();

void useA() {
    if (A > 0 && X >= 500) {
	A--;
	X -= 500;
	if (X == 0) {
	    c++;
	} else if (X > 0) {
	    useA();
	    useB();
	    useC();
	}
	A++;
	X += 500;
    }
}
void useB() {
    if (B > 0 && X >= 100) {
	B--;
	X -= 100;
	if (X == 0) {
	    c++;
	} else if (X > 0) {
	    useB();
	    useC();
	}
	B++;
	X += 100;
    }
}
void useC() {
    if (C > 0 && X >= 50) {
	C--;
	X -= 50;
	if (X == 0) {
	    c++;
	} else if (X > 0) {
	    useC();
	}
	C++;
	X += 50;
    }
}

int main()
{
    cin >> A >> B >> C >> X;
    useA();
    useB();
    useC();
    cout << c << endl;
    return 0;
}
