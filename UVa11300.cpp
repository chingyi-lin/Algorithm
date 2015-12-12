#include <cstdio>
#include <cstdlib> 
#include <iostream>
#include <algorithm> 

using namespace std;

int main(int argc, const char * argv[]) {
	const int N = 1000000 + 10;
	long long C[N], M, temp, x1, ans;
	int n;
	while (scanf("%d", &n) == 1){
		ans = C[0] = 0;
		cin >> temp;
		M = C[1] = temp;
		for (int i = 2; i < n+1; i++){
			scanf("%lld", &temp);
			C[i] = C[i - 1] + temp;
			M += temp;
		}
		M = M / n;
		for (int i = 1; i < n; i++)
			C[i] = C[i] - i*M;
		sort(C, C + n);
		x1 = C[n / 2];

		for (int i = 0; i < n; i++) //x1 + |x1 - C1| + ... + |x1 - C[N-1]|
			ans += abs(x1 - C[i]);
		cout << ans << endl;
	}
	return 0;
}