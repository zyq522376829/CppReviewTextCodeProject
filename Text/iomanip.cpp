#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main1()
{
	int a;
	cout << "input a:";
	cin >> a;
	cout << "dec:" << dec << a << endl; //以十进制形式输出整数
	cout << "hex:" << hex << a << endl; //以十六进制形式输出整数a
	cout << "oct:" << setbase(8) << a << endl; //以八进制形式输出整数a
	char *pt = "China"; //pt指向字符串"China"
	cout << setw(10) << pt << endl; //指定域宽为,输出字符串
	cout << setfill('*') << setw(10) << pt << endl; //指定域宽,输出字符串,空白处以'*'填充
	double pi = 22.0 / 7.0; //计算pi值
	//按指数形式输出,8位小数
	cout << setiosflags(ios::scientific) << setprecision(8);
	cout << "pi=" << pi << endl; //输出pi值
	cout << "pi=" << setprecision(4) << pi << endl; //改为位小数
	cout << "pi=" << setiosflags(ios::fixed) << pi << endl; //改为小数形式输出
	system("pause");
	return 0;
}

int main()
{
	int a = 21;
	cout.setf(ios::showbase);//显示基数符号(0x或)
	cout << "dec:" << a << endl; //默认以十进制形式输出a
	cout.unsetf(ios::dec); //终止十进制的格式设置
	cout.setf(ios::hex); //设置以十六进制输出的状态
	cout << "hex:" << a << endl; //以十六进制形式输出a
	cout.unsetf(ios::hex); //终止十六进制的格式设置
	cout.setf(ios::oct); //设置以八进制输出的状态
	cout << "oct:" << a << endl; //以八进制形式输出a
	cout.unsetf(ios::oct);
	char *pt = "China"; //pt指向字符串"China"
	cout.width(10); //指定域宽为
	cout << pt << endl; //输出字符串
	cout.width(10); //指定域宽为
	cout.fill('*'); //指定空白处以'*'填充
	cout << pt << endl; //输出字符串
	double pi = 22.0 / 7.0; //输出pi值
	cout.setf(ios::scientific); //指定用科学记数法输出
	cout << "pi="; //输出"pi="
	cout.width(14); //指定域宽为
	cout << pi << endl; //输出pi值
	cout.unsetf(ios::scientific); //终止科学记数法状态
	cout.setf(ios::fixed); //指定用定点形式输出
	cout.width(12); //指定域宽为
	cout.setf(ios::showpos); //正数输出“+”号
	cout.setf(ios::internal); //数符出现在左侧
	cout.precision(6); //保留位小数
	cout << pi << endl; //输出pi,注意数符“+”的位置
	system("pause");
	return 0;
}
