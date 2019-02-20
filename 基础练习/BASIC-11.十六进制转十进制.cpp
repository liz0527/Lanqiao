/*
问题描述
　　从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
　　注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。
样例输入
FFFF
样例输出
65535
*/
/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cin >> s;
	long long int sum=0;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.length();i++){
		int j = i;
		long long int temp;
		switch (s[i]){
			case 'A': temp = 10;break;
			case 'B': temp = 11;break;
			case 'C': temp = 12;break;
			case 'D': temp = 13;break;
			case 'E': temp = 14;break;
			case 'F': temp = 15;break;
			default: temp = s[i]-'0';
		}
		while(j!=0){
			temp *= 16;
			j--;
		}
		sum += temp;
	}
	cout << sum;
	return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    while (cin >> s) {
    	int len = s.length();
    	long long sum = 0;
    	for (int i = 0; i < len; i++) {
    		if (s[i] >= 'A' && s[i] <= 'F') {
    			sum = sum * 16 + s[i] - 'A' + 10;
    		}
    		else {
    			sum = sum * 16 + s[i] - '0';
    		}
    	}
    	cout << sum;
    }
    return 0;
}