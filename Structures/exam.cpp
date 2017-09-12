#include "stdafx.h"
using namespace std;
int main() {
	int t[] = { 5, 4, 3, 2, 1 }, i;
	for (i = t[4]; i < t[0]; i++)
		t[i - 1] = -t[3];
	cout << i;
	return 0;
}