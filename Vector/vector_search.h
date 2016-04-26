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

//特殊情况: 目标元素不存在, 反过来, 存在多个目标元素
//
//语义约定:
//即便失败, 也要给出新元素适当的插入位置(不大于e的最后一个元素)
//