#include<iostream>
using namespace std;
/*
 * 题目大意:
 * N只火鸡的价格为 _XYZ_，五位价格，第一个数字非零，N在1到99之间
 * 求出两边的数字，以及火鸡的原价格
 * 如果有多组数据，输出价格最高的
 *
 * 输入示例:
 * 72
 * 6 7 9
 * 5
 * 2 3 7
 * 78
 * 0 0 5
 *
 * 输出示例:
 * 3 2 511
 * 9 5 18475
 * 0
 */

 //得到5位整数
int func(int i, int x, int y, int z, int j) {
	int temp = i;
	temp = temp * 10 + x;
	temp = temp * 10 + y;
	temp = temp * 10 + z;
	temp = temp * 10 + j;

	return temp;
}

int main() {
	int n, x, y, z;
	cin >> n;
	cin >> x >> y >> z;

	int maxnum = 0, max_i = 0, max_j = 0, temp = 0;

	bool mark = false;//是否存在满足条件的结果
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			temp = func(i, x, y, z, j);

			if (temp % n == 0) {
				if ((temp / n) > maxnum) {
					mark = true;
					maxnum = temp / n;
					max_i = i; max_j = j;

				}

			}
		}

	}
	if (mark == false) {
		cout << 0;
		return 0;
	}
	cout << max_i << ' ' << max_j << ' ' << maxnum;

	return 0;

}