#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;//���ж��ٺ�����
	int w = 0;//����ٷ��Ӻ�һ������
	int e = 0;//����˶��ٷ��ӣ�
	int r = 0;
	int t = 0;
	int y = 0;
	scanf("%d%d%d", &q, &w, &e);
	t = e / w;//���˶��ٺ�ţ��
	y = e % w;
	//��ȥ����ʱ���ȷû�����ţ��
	if (y != 0)
	{
		t += 1;
	}
	r = q - t;//��ʣ��������
	printf("%d\n", r);
	return 0;
}