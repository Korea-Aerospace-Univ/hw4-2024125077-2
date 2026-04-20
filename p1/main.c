#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;
    int k = 0;
    scanf("%d", &i);
    do {
        scanf("%d", &j);
        if (i > j) printf("%d<?\n", j);
        if (i < j) printf("%d>?\n", j);
        
        k++;
    } while (i != j);
    
    printf("%d==?\n", j);
    printf("%d", k);
    
    return 0;
}
