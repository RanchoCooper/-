/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-26 00:31:37
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T> ///在有序向量的区间[lo, hi)内, 确定不大于e的最后一个节点的秩
Rank Vector<T>::search(T const& e, Rank lo, Rank hi) const {
	return (rand() % 2) ? //随机使用二分查找或者Fibonacci查找
		binSearch(_elem, e, lo, hi) : finSearch(_elem, e, lo, hi);
}
