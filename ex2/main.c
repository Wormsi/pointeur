#include <stdio.h>
void mysuperswap(void** p1,void** p2);
int main (void)
{
	int n1=12;
	int n2=15;
	char c1='a';
	char c2='e';
	int *pn1=&n1;
	int *pn2=&n2;
	char *pc1=&c1;
	char *pc2=&c2;
	mysuperswap(&pn1,&pn2);
	mysuperswap(&pc1,&pc2);
	printf("%d %d %c %c\n",*pn1,*pn2,*pc1,*pc2);
	return(0);
}
