
#include"print.h"
void sc()
{
	for (int i = 1; i <= n; i++)
	{
		if (m != i) {
			if (dis[i] < 200) {
				cout << m << "->" << i << endl;
				cout << "��һ����" << xia[m][i] << endl;;
				cout << "���·����" << dis[i] << endl;
			}
			else
				cout << m << "->" << i << "���ɴ�" << endl;
		}
	}
}
