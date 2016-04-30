/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-27 00:00:09
 * @brief
 * implement of class Vector
 */
#pragma once
#include "..\fibonacci\Fib.h"//引入Fib数列类

//普通二分法效率上仍有改进余地
//转向左右两分支关键码比较次数不同, 而递归深度却一样(左1右2)
//本算法原理在于通过递归深度的不平衡, 对转向成本的不平衡进行补偿
template <typename T>
static Rank binSearch(T* a, T const& e, Rank lo, Rank hi) {
	printf("FIB search(A)\n");
	Fib fib(hi - lo);//创建Fib数列
	while (lo < hi) {//每步迭代可能要做两次比较判断, 有三个分支
		while (hi - lo < fib.get())
			fib.prev();//通过向前顺序查找
		Rank mid = lo + fib.get() - 1;//以中点为轴点
		//其实就是轴点mid的划分不一样, 后面算法一致
		if (e < a[mid])
			hi = mid;//向前半段[lo, mid)继续查找
		else if (a[mid] < e)
			lo = mid + 1;//向后半段(mid, hi)继续查找
		else
			return mid;//命中mid
	}
	return -1;//查找失败
}
//有多个元素命中时, 不能保证返回秩最大元素
//失败时简单返回-1, 而不能指示失败的位置