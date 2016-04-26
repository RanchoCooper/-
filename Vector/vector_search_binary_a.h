/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-26 00:36:07
 * @brief
 * implement of class Vector
 */
#pragma once

//二分查找算法(版本a)
template <typename T>
static Rank binSearch(T* a, T const& e, Rank lo, Rank hi) {
	printf("BIN search(A)\n");
	while (lo < hi) {//每步迭代可能要做两次比较判断, 有三个分支
		Rank mid = (lo + hi) >> 1;//以中点为轴点
		if (e < a[mid])
			hi = mid;//向前半段[lo, mid)继续查找
		else if (a[mid] < e)
			lo = mid + 1;//向后半段(mid, hi)继续查找
		else
			return mid;//命中mid
	}
	return -1;//查找失败
}//有多个元素命中时, 不能保证返回秩最大元素
 // 查找失败时, 简单返回-1, 而不能指示失败的位置