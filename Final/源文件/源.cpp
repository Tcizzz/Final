
#include"Delete.h"
#include"dijkstra.h"
#include"File.h"
#include"print.h"
#include"Trans.h"
#include"Add.h"
#include <cstdlib>

using namespace std;
int xia[100][100];//下一跳  
int map[100][100];//存储图
int dis[10000];//存储距离
int book[10000];//1为有搜过，0为没有。
int m, n = 9, a, b;//n为节点数
int main()
{
	system("color 2f");
	int k, l;

	for (k = 0; k <= 100; ++k)
		for (l = 0; l <= 100; ++l)
			xia[k][l] = l;//初始化下一跳
	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++)
		{
			map[i][j] = 200;
			if (i == j)map[i][j] = 0;
		}
	wj();
	int n3 = 4;
	int h = 1;
	for (; h != 0;)
	{
		cout << "请选择你进行的操作" << endl;
		cout << "     1.增加     " << endl;
		cout << "     2.删除     " << endl;
		cout << "     3.查询路由表   " << endl;
		cout << "     4.退出" << endl;
		cout << "请选择你要执行的操作：";
		cin >> n3;
		while (cin.fail())
		{
			//cin.clear();
			//cin.ignore(10000, '\n');
			cout << "error!请重新输入:";
			cin >> n3;
		}
		while (n3 != 1 && n3 != 2 && n3 != 3 && n3 != 4)
		{
			cout << "error!请输入1，2，3，4:";
			cin >> n3;
			while (cin.fail())
			{
				//cin.clear();
				//cin.ignore(10000, '\n');
				cout << "error!请重新输入:";
				cin >> n3;
			}
		}
		if (n3 == 1)zj();
		if (n3 == 2)
		{
			del();
		}
		if (n3 == 3)
		{
			m = 0;
			//system("cls");
			cout << "请输入你所要查询路由表的结点：";
			cin >> m;
			while (cin.fail())
			{
				//cin.clear();
				//cin.ignore(10000, '\n');
				cout << "error!请重新输入:";
				cin >> m;
			}
			dijkstra(m);//以m为源点。
			sc();
			for (int t = 0; t <= 10000; ++t)
				book[t] = 0;
		}
		if (n3 == 4) h = 0;
	}
}