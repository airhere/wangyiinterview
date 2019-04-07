//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//int hand[102];
//
//int main() {
//	freopen("test.txt", "r", stdin);
//	int t, n;
//	cin >> t;
//	
//	for (int icas = 0; icas < t; ++icas) {
//		cin >> n;
//		memset(hand, 0, sizeof(hand));
//		char card[2];
//		int ans = 0;
//		for (int i = 0; i < n; ++i) {
//			cin >> card;
//			if (card[0] == 'A') {
//				hand[1] += 1;
//			}
//			else if (card[1] == '0' && card[0]=='1') {
//				hand[10] += 1;
//			}
//			else if (card[0] > '1' && card[0] <= '9') {
//				hand[card[0] - '0'] += 1;
//			}
//			else if (card[0] == 'J') {
//				hand[11] += 1;
//			}
//			else if (card[0] == 'Q') {
//				hand[12] += 1;
//			}
//			else if (card[0] == 'K') {
//				hand[13] += 1;
//			}
//		}
//		int front = 1;
//		for (int i = 1; i < 14; ++i) {
//			while (hand[i] > 0) {
//				++i;
//			}
//			int end = i;
//			if (end - front >= 5) {
//				for (int j = front; j <= end - 5; ++j) {
//					int kind = 1;
//					for (int k = j; k < j + 5; ++k) {
//						kind *= hand[k];
//					}
//					ans += kind;
//					for (int k = j + 5; k < end; ++k) {
//						kind *= hand[k];
//						ans += kind;
//					}
//				}
//			}
//			while (hand[i] == 0 && i<14) {
//				++i;
//			}
//			front = i;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}