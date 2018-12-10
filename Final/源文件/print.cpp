
#include"print.h"
void sc()
{
	for (int i = 1; i <= n; i++)
	{
		if (m != i) {
			if (dis[i] < 200) {
				cout << m << "->" << i << endl;
				cout << "下一跳：" << xia[m][i] << endl;;
				cout << "最短路径：" << dis[i] << endl;
			}
			else
				cout << m << "->" << i << "不可达" << endl;
		}
	}
}
