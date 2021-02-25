#include<iostream>
#include<stdlib.h>

using namespace std;
/*
 * 题目描述:
 * 把一个个大小差一圈的筐叠上去，使得从上往下看时，边筐花色交错。
 * 输入格式:
 * 输入是一个个的三元组，分别是，外筐尺寸n（n为满足0<n<80的奇整数），
 * 中心花色字符，外筐花色字符，后二者都为ASCII可见字符；
 * 输出格式:
 * 输出叠在一起的筐图案，中心花色与外筐花色字符从内层起交错相叠，多筐相叠时，最外筐的角总是被打磨掉。
 * 叠筐与叠筐之间应有一行间隔。
 *
 * 样例输入:
 * 11 B A 
 * 5 @ W
 *
 * 样例输出:
 *
 *  AAAAAAAAA
 * 
 * ABBBBBBBBBA
 *
 * ABAAAAAAABA
 *
 * ABABBBBBABA
 *
 * ABABAAABABA
 *
 * ABABABABABA
 *
 * ABABAAABABA
 *
 * ABABBBBBABA
 *
 * ABAAAAAAABA
 *
 * ABBBBBBBBBA
 *
 *  AAAAAAAAA
 *
 *  WWW
 *
 * W@@@W
 *
 * W@W@W
 * 
 * W@@@W
 *
 *  WWW
 */
int main() {
	int n;
	char a, b;
	cin >> n >> a >> b;

	char **arr = ((char**)malloc(sizeof(char*)*(n + 1) / 2));
	for (int i = 0; i < n; i++) {
		arr[i] = ((char*)malloc(sizeof(char)*(n + 1) / 2));
	}

	for (int i = 0; i < (n + 1) / 2; i++) {
		for (int j = i; j < (n + 1) / 2; j++) {
			if (i % 2 == 0) {
				arr[i][j] = b;
				arr[j][i] = b;
			}

			if (i % 2 == 1) {
				arr[i][j] = a;
				arr[j][i] = a;
			}
		}
	}
	arr[0][0] = ' ';

	for (int i = 0; i < (n + 1) / 2; i++) {
		for (int j = 0; j < (n + 1) / 2; j++) {
			cout << arr[i][j];
		}
		for (int j = 0; j < (n + 1) / 2 - 1; j++) {
			cout << arr[i][(n + 1) / 2 - 2 - j];

		}

		cout << '\n'<<'\n';
	}

	for (int i = 0; i < (n + 1) / 2 - 1; i++) {
		for (int j = 0; j < (n + 1) / 2; j++) {
			cout << arr[(n + 1) / 2 - 2 - i][j];
		}

		for (int j = 0; j < (n + 1) / 2 - 1; j++) {
			cout << arr[(n + 1) / 2 - 2 - i][(n + 1) / 2 - 2 - j];

		}

		cout << '\n' << '\n';

	}

	return 0;
}