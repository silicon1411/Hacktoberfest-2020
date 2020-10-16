#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	while(T--) {
		int N,  c = 0, m = 1, d = 2;
		long int A, B, chef = 0, morty = 0;
		cin >> N;
		for (int i = 0; i < N; ++i)
		{
			int tmp, power_a = 0, power_b = 0;
			cin >> A >> B;
			while(A) {
				tmp = A % 10;
				A = A / 10;
				power_a += tmp;
			}
			while(B) {
				tmp = B % 10;
				B = B / 10;
				power_b += tmp;	
			}
			if(power_a > power_b) {
				chef++;
			}
			else if(power_a < power_b) {
				morty++;
			}
			else{
				chef++;
				morty++;
			}
		}
		if (chef == morty)
		{
			cout << d << ' ' << chef << endl;
		}
		else if (chef > morty)
		{
			cout << c << ' ' << chef << endl;
		}
		else {
			cout << m << ' ' << morty << endl;
		}
	}
	return 0;
}
