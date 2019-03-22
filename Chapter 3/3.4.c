#include <stdio.h>

void towerOfHanoi(int n, int from, int to, int aux){
	if (n == 1){
		printf("Move disk %d from rod %d to rod %d\n", n, from, to);
		return;
	}
	towerOfHanoi(n - 1, from, aux, to);
	printf("Move disk %d from rod %d to rod %d\n", n, from, to);
	towerOfHanoi(n - 1, aux, to, from);
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		towerOfHanoi(n, 1, 3, 2);
	}
	return 0;
}