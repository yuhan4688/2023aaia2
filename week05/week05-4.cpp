//a008 week05-4.cpp
#include <stdio.h>
int main()
{
	for(int i=1 ; i<10; i++){
		for(int j=1 ;j<10 ;j++){
			printf("%dx%d=%2d ",j,i,i*j);
		}
		printf("\n");
	}
		
}