#pragma once

int euclid(int n, int m) {
	if (n < m) {
		int tmp = n;
		n = m;
		m = tmp;
	}
	if (m == 0)
		return m;
	return euclid(m, n % m);
}