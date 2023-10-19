#include<stdio.h>

int main(){
	//dataType ArrayName[x][y];
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];  
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("Nhap gia tri cho phan tu o hang %d, cot %d :", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}