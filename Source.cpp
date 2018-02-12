#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *a = new int[n +1];
	for (int i = 0; i < n + 1; ++i) {
		a[i] = i;
	}
	for (int j = 2; j < n +1; ++j) {
		if (a[j] != 0) {
			cout << a[j] << endl;
			for (int p = j*j; p < n + 1; p += j) {
				a[p]=0;
			}
		}
	}



	return 0;
}
