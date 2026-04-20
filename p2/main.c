#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    
    char str[n];
    scanf("%s", &str);
    
    int countnum = 0;
    int counteng = 0;
    
    int maxnum = 0;
    int maxeng = 0;
    
    int i = 0;
    
    while (i < n) {
        if (str[i]>='a' && str[i]<='z') {
            counteng++;
            countnum = 0;
            if (counteng>maxeng) maxeng = counteng;
        }
        if(str[i]>='0' && str[i]<='9') {
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
