#include <stdio.h>

int main(void)
{
    int i = 0;        // 정답 변수 초기화
    int j = 0;        // 문제 푸는 변수 초기화
    int k = 0;        // 횟수 변수 초기화
    scanf("%d", &i);  // 정답 입력 받기
    do {
        scanf("%d", &j);                            // 정답 맞히기 도전 숫자 입력 받기
        if (i > j) printf("%d<?\n", j);             // j가 i보다 클 경우 입력 받은 j가 정답보다 크다는 것을 출력
        else if (i < j) printf("%d>?\n", j);        // j가 i보다 작을 경우 입력 받은 j가 정답보다 작다는 것을 출력
        else printf("%d==?\n", j);                  // i와 j가 같을 경우 정답을 맞췄음을 출력 
        
        k++;                                        // 정답 맞히기 시도할 때마다 정답 맞히기 시도 횟수 증가
    } while (i != j);                               // 정답을 못 맞혔을 때
    
    printf("%d", k);                                // 정답 맞히기 시도 총 횟수 출력
    
    return 0;
}
