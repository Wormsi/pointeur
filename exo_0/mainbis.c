#include <stdio.h>
void addone(int *n);
int main(void)
{
        int n;
        n=0;
        addone(&n);
        printf("%d\n",n);
        return(0);
}
