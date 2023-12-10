#include <iostream>

using namespace std;

int main()

{

	int x;

	cin >> x;

	int a = x / 100, b = (x / 10) % 10, c = x % 10;

	int ans = a * 100 + c * 10 + b;

	cout << ans;

	return 0;

}

