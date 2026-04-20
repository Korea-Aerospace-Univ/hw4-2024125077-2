#include <stdio.h>

int main(void)
{
    int n = 0;          // n 초기화
    scanf("%d", &n);    // n 입력 받기
    
    getchar();          // 엔터 값을 포함하지 않게 해준다.
    
    int countnum = 0;   // 숫자가 연속되는 걸 셀 때 사용하는 변수 초기화
    int counteng = 0;   // 영어가 연속되는 걸 셀 때 사용하는 변수 초기화
    
    int maxnum = 0;     // 숫자가 연속되는 값이 최대일 때 수를 저장하는 변수 초기화
    int maxeng = 0;     // 영어가 연속되는 값이 최대일 때 수를 저장하는 변수 초기화
    
    int i = 0;          // 실행 횟수 초기화
    char a;             // 입력받는 문자를 저장할 변수
    while ((a = getchar()) != '\n') {                        // 엔터 입력될 때까지 한 글자씩 받기
        if (a>='a' && a<='z') {                              // 소문자 영어 일 때
            counteng++;                                      // 소문자 영어 세기 추가
            countnum = 0;                                    // 숫자 연속이 끊겼으므로 숫자 연속 카운트 초기화
            if (counteng>maxeng) maxeng = counteng;          // 연속 영어 수가 현재 영어 연속 최댓값보다 크면 갱신
        }
        if(a>='0' && a<='9') {                               // 숫자일 때
            countnum++;                                      // 숫자 세기 추가
            counteng = 0;                                    // 소문자 영어 연속이 끊겼으므로 영어 연속 카운트 초기화
            if (countnum>maxnum) maxnum = countnum;          // 연속 숫자 수가 현재 숫자 연속 최댓값보다 크면 갱신
        }
        
        i++;            // 실행 횟수 1 증가
    }
    
    printf("%d\n", maxeng);  // 연속된 소문자 영어의 최대 개수 출력
    printf("%d", maxnum);    // 연속된 숫자의 최대 개수 출력
    
    return 0;
}
