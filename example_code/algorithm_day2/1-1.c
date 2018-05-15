#include <stdio.h>

#define BUFFSIZE 100

int arr[BUFFSIZE];
/* n자리 k진법의 수를 오름차순으로 출력하는 함수 */
void func(int idx, int n, int k) {
	int i, j;
	for (i = 0; i < k; i++) {
		arr[idx] = i;
		if (idx == n - 1) {
			for (j = 0; j < n; j++)
				printf("%d ", arr[j]);
			printf("\n");
		}
		else {
			func(idx + 1, n, k);
		}
	}
}

int main(void) {
	int i;
	for(i=0;i<BUFFSIZE;i++)
		arr[i] = -1;
	// func(0, n, k)
	func(0, 3, 2);
	return 0;
}