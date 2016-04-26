/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-27 00:20:28
 * @brief
 * implement of Fibonacci
 * need to improve 'cause use int type
 */
#pragma once

class Fib {//Fibonacci数列类
private:
	int f, g;//f = fib(k-1), g=fib(k). 均为int型, 很快会数值溢出
public:
	Fib(int n) {//初始化为不小于n的最小Fibonacci项
		f = 1; g = 0;
		while (g < n)
			next();
	}

	int get() { return g; }
	int next() { g += f; f = g - f; return g; }
	int prev() { f = g - f; g -= f; return g; }
};