#include <stdio.h>
int main()
{
    int n[10], x, y;
    scanf("%d", &y);
    for(x=0; x<=9; x++)
    {
        n[x]=y;
        printf("N[%d] = %d\n",x,y);
        y = y * 2;
    }
    return 0;
}
