/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-28 14:05:44
 * @brief
 * implement of class Vector
 */
#pragma once

//二分查找算法(版本C)
template <typename T>
static Rank binSearch(T* a, T const & e, Rank lo, Rank hi) {
	while (lo < hi) {//每步迭代仅需做一次比较, 两个分支
		Rank mid = (lo + hi) >> 1;//还是以中点为轴点
		(e < a[mid]) ? hi = mid : lo = mid + 1;// [lo, mid) 或者 (mid, hi)
	}//成功查找不能提前终止
	return --lo;
}//存在多个命中元素时, 总能保证返回秩最大者
// 查找失败时, 返回失败的位置