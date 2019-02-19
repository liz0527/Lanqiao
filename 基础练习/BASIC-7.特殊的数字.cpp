/*
问题描述
　　153是一个非常特殊的数，它等于它的每位数字的立方和，即153=1*1*1+5*5*5+3*3*3。编程求所有满足这种条件的三位十进制数。
输出格式
　　按从小到大的顺序输出满足条件的三位十进制数，每个数占一行。
*/
#include <iostream>
using namespace std;
int main(){
	int i;
	int a,b,c;
	for(i=100;i<1000;i++){
		a = i%10;//个位
		b = i%100/10;//十位
		c = i/100;
		if(i == a*a*a + b*b*b + c*c*c){
			cout << i << endl;
		}
	}
	return 0;
}