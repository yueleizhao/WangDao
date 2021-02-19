#include<iostream>
using namespace std;

/*
 * 题目描述
 * 设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，且有：abc+bcc=532。求满足条件的所有a、b、c的值。
 *
 * 输入描述:
 * 题目没有任何输入。
 * 输出描述:
 * 请输出所有满足题目条件的a、b、c的值。
 * a、b、c之间用空格隔开。
 * 每个输出占一行。
 */

 /*
  * 分析:abc+bbc = a*100 + b*10 + c + b*100 + c*10 + c = a*100 + b*110 + c*12 = 532
  */
int main() {

	int a = 0;

	for (int b = 0; b < 10; b++) {

		for (int c = 0; c < 10; c++) {

			a = (532 - (110 * b + 12 * c)) / 100;

			if ((a * 100 + b * 110 + c * 12 == 532) && a < 10 && a >= 0) {

				cout << a << ' ' << b << ' ' << c << '\n';
			}

		}

	}

	return 0;
}