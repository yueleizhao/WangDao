#include<iostream>
using namespace std;
/*
 * 对称平方数1
 * 题目描述
 * 打印所有不超过256，其平方具有对称性质的数。如2，11就是这样的数，因为2*2=4，11*11=121。
 * 输出描述:
 * 输出具有题目要求的性质的数。如果输出数据不止一组，各组数据之间以回车隔开
 */
bool reverse(int n) {
	int a[6] = { -1 };
	int cnt = 0;
	while (n) {
		a[cnt++] = n % 10;
		n = n / 10;

	}

	int i = 0;
	for (; i < cnt / 2; i++) {
		if (a[i] != a[cnt - 1 - i]) {
			return false;
		}


	}
	if (i == cnt / 2) {
		return true;
	}
	return false;

}


int main() {
	for (int i = 0; i <= 256; i++) {
		if (reverse(i*i)) {
			cout << i << '\n';

		}

	}


	return 0;
}