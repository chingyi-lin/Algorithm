#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char * argv[]){
	int n, m;
	double point, goal;
	while (scanf("%d %d", &n, &m) == 2){
		if (n == m){
			printf("0.0\n");
		}
		else {
			double ans = 0.0;
			for (int i = 1; i < n; i++){
				point = (double) i * (n+m) / n;
				goal = round(point);
				ans += abs(point - goal);
			}
			ans = ans * 10000 / (n+m);
			printf("%.4f\n", ans);
		}
	}
	return 0;
}