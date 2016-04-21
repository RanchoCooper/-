/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-21 22:57:11
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
void Vector<T>::copyFrom(T const* A, Rank lo, Rank hi) {//区间复制
	_elem = new T[_capacity = (hi - lo) << 1];//重新分配空间
	_size = 0;//规模清零
	while (lo < hi)
		_elem[_size++] = A[lo++];
}

