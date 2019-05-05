#pragma once

int euclid(int n, int m) {
	if (n < 0 || m < 0)
		return -1;
	if (n < m) {
		int tmp = n;
		n = m;
		m = tmp;
	}
	if (m == 0)
		return n;
	return euclid(m, n % m);
}