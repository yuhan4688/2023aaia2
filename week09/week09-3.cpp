///�n�F�Ѧr��P�}�C�����Y
#include <stdio.h>
int main()
{
    printf("�ФJ10�Ӧr���A���঳�Ů�b�̭�:\n");
    char line[11];///����r���h�@��
    scanf("%s",line);///���n���Ů�
    printf("�o�Ӧr�O:%s �̭����r�A���O�O:\n");

    for(int i=0;i<11;i++){
        printf("��%d�r��:%c �������Ʀr�O:%d\n",i,line[i],line[i]);
    }
}
