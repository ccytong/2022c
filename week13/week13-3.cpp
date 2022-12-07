#include <stdio.h>
int a[20][20];
int main()
{
	int m,n;
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	for(int i=m-1; i>=0; i--){
		for(int j=n-1; j>=0; j--){
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}
