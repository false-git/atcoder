#include <iostream>

using namespace std;

int main()
{
    unsigned long long W, H, x, y;
    cin >> W >> H >> x >> y;
    int multi = 0;
    double s = W * H / 2.0;
    if (x * 2 == W && y * 2 == H) {
	// 最適な分割が複数ある。
	multi = 1;
    }
    cout << s << " " << multi << endl;
    return 0;
}
