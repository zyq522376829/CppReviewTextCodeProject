#include <stdio.h>
#include <stdlib.h>

union A
{
	char a;
	char *b; // �������ָ���ԱҪ�ر�ע��
};

int main()
{
	A a;
	a.b = (char *)malloc(10); // bָ����һ���ѵĵ�ַ
	// �������������ָ���Ա����ôһ��Ҫʹ�������ָ�룬����freeָ��֮�����ʹ��������Ա
	a.a = 10; // b��ֵҲ����10��
	free(b); // ��ʱ�ͷ�b�Ǵ���ģ���Ϊ������һ�ж�a���и�ֵʱ���Ѿ���b��ֵ�����ˣ�����������ڴ�й©
	return 0;
}