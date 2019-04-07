#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
char str[10002];
char ans[10000];
char mid[40000];

int main() {
	freopen("test.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	while (t--) {
		memset(mid, 0, sizeof(mid));
		scanf("%s", str);
		int anslen = 0;
		int slen = strlen(str);
		int index = 0;
		int i;
		for (i = slen-1; i >= 0 ; i-=3) {
			int tmp = (str[i] - '0');
			if (i - 1 >= 0) tmp += 10 * (str[i - 1] - '0');
			if (i - 2 >= 0) tmp += 100 * (str[i - 2] - '0');
			int start = 10 * index;
			for (int j = 0; j < 10; ++j) {
				mid[start + j] = (tmp & (1 << j))?1:0;
			}
			++index;
		}
		int midlen = 10 * index;
		while (mid[midlen] == 0) {
			--midlen;
		}
		for (i = 0; i < midlen + 1; i+=5) {
			int tmp = 0;
			for (int j = 0; j < 5; ++j) {
				tmp += (1 << j)*mid[i + j];
			}
			if (tmp < 10) {
				ans[anslen++] = '0' + tmp;
			}
			else {
				ans[anslen++] = tmp - 10 + 'A';
			}
		}
		for (int i = anslen - 1; i >= 0; --i) {
			printf("%c", ans[i]);
		}
		printf("\n");
	}
	return 0;
}