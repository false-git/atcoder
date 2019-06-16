#include <iostream>

using namespace std;

int main()
{
    unsigned long long W, H, x, y;
    cin >> W >> H >> x >> y;
    int multi = 0;
    // x, y を常に原点に近い側に移動。
    if (x * 2 > W) {
	x = W - x;
    }
    if (y * 2 > H) {
	y = H - y;
    }
    double sx = x * H;
    double sy = y * W;
    double s;
    if (x == 0 && y == 0) {
	// x, y が原点になるとき。
	s = W / 2.0 * H;
    } else if (sx == sy) {
	// 最適な分割が複数ある。
	s = sx;
	multi = 1;
    } else if (sx < sy) {
	s = sy;
    } else {
	s = sx;
    }
    cout << s << " " << multi << endl;
    return 0;
}
