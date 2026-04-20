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
    char a;
    while ((a = getchar()) != '\n') {
        if (a>='a' && a<='z') {     // 소문자 영어 일 때
            counteng++;             // 소문자 영어 세기 추가
            countnum = 0;
            if (counteng>maxeng) maxeng = counteng;
        }
        if(a>='0' && a<='9') {
            countnum++;
            counteng = 0;
            if (countnum>maxnum) maxnum = countnum;
        }
        
        i++;
    }
    
    printf("%d\n", maxeng);
    printf("%d", maxnum);
    
    return 0;
}
