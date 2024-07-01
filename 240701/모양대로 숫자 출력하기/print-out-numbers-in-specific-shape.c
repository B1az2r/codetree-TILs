#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	
	// 숫자로 이루어진 삼각형을 출력합니다.
	for(int i = n; i >= 1; i--) {
		for(int j = n; j >= 1; j--) {
			if(j > i)
				printf("  ");
			else
				printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}