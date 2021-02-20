#include<iostream>
using namespace std;
/*
 * 逆序数
 * 题目描述
 * 设N是一个四位数，它的9倍恰好是其反序数（例如：1234的反序数是4321）
 * 求N的值
 *
 * 输出描述:
 * 输出题目要求的四位数，如果结果有多组，则每组结果之间以回车隔开。
 */

int reverse(int i) {

	int a = 0;
	int temp = 1000;

	while (i) {
		a = a + (i % 10)*temp;
		i = i / 10;
		temp = temp / 10;

		//方法二(实用):
		/*
			a *= 10;
			a += i % 10;
			i /= 10;

		 */

	}

	return a;
}

int main() {
	for (int i = 1000; i <= 1111; i++) {
		if (i * 9 == reverse(i)) {
			cout << i << '\n';
		}

	}

}
