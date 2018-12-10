#include "pch.h"
#include"Delete.h"
void del()//rrrr
{
	int n3 = 0;
	cout << "删除哪一部分：1.点；2.边 " << endl;
	cout << "请输入你要执行的操作：" << endl;
	cin >> n3;
	while (cin.fail())
	{
		//cin.clear();
		cin.ignore(10000, '\n');
		cout << "error!请重新输入:" << endl;
		cin >> n3;
	}
	while (n3 != 1 && n3 != 2 && n3 != 3 && n3 != 4)
	{
		cout << "error!请输入1，2:" << endl;
		cin >> n3;
		while (cin.fail())
		{
			//cin.clear();
			cin.ignore(10000, '\n');
			cout << "error!请重新输入:" << endl;
			cin >> n3;
		}
	}
	if (n3 == 1)
	{
		int u;
		cout << "删除哪一个结点：";
		cin >> u;
		while (cin.fail())
		{
			//cin.clear();
			cin.ignore(10000, '\n');
			cout << "error!请重新输入:" << endl;
			cin >> u;
		}
		for (int i = 0; i <= n; ++i)
		{
			map[u][i] = 200;
			map[i][u] = map[u][i];
			if (i == u)map[u][u] = 0;
		}
	}
	if (n3 == 2)
	{
		cout << "删除哪一条边：";
		int o1, o2;
		cin >> o1 >> o2;
		if (o1 == o2)cout << "error!";
		else { map[o1][o2] = 200; map[o2][o1] = map[o1][o2]; }
	}
}