#include <iostream>

#include "Library.h"

using namespace std;

int main()
{
	int n, m;

	cin >> n;
	cin >> m;

	cout << "result: " << euclid(n, m) << endl;
}