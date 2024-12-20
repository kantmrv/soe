#include <cmath>
#include <iostream>
#include <vector>


int main() {
	uint64_t n;
	std::cout << "Enter a natural number n: ";
	std::cin >> n;
	if (n < 2) {
		return 1;
	}

	std::vector<bool> v(n);
	for (int i = 2; i < sqrt(n) + 1; i++) {
		if (!v[i]) {
			for (int j = i + i; j < v.size(); j += i) {
				v[j] = true;
			}
		}
	}
	std::cout << "Prime numbers up to " << n << ":" << std::endl;
	for (int i = 2; i < v.size(); i++) {
		if (!v[i]) {
			std::cout << i << ' ';
		}
	}

	return 0;
}
