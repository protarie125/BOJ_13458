#include <iostream>
#include <vector>

using namespace std;

using ll = long long;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	cin >> n;

	auto a = vl(n);
	for (auto i = 0; i < n; ++i) {
		cin >> a[i];
	}

	ll b, c;
	cin >> b >> c;

	auto ans = ll{ 0 };
	for (const auto& x : a) {
		++ans;
		const auto& d = x - b;
		if (0 < d) {
			ans += d / c + (0 < d % c ? 1 : 0);
		}
	}

	cout << ans;

	return 0;
}