/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-27 09:36:06
 * @brief
 * implement of class Vector
 */
#pragma once

//二分查找算法(版本B)
//与A的区别在于使得左右递归的比较次数一致
//仅区分e<mid 与 mid <= e两种情形
template <typename T>
static Rank binSearch(T* a, T const& e, Rank lo, Rank hi) {
	printf("BIN search(B)\n");
	while (1 < hi - lo) {//有效查找区间的宽度缩短至1时, 算法才会终止
		Rank mid = (hi - lo) >> 1;//仍然以中点为轴点
		(e < a[mid]) ? hi = mid : lo = mid;//[lo, mid) 或[mid, hi)
	}//出口时hi = lo + 1, 查找区间仅含一个元素a[lo]
	return (e == a[lo])? lo : -1;//返回命中秩或-1
}//平均性能更好, 但最好情形比A要慢(不能直接返回mid)