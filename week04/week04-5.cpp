//week04-5.cpp a021
#include <stdio.h>
int main()E
{
	int a;
	scanf("%d",&a);
	
	int ans=1;
	for (int i=1; i<=a; i++) {
		ans*=i;
	}
	printf("%d",ans);
}
