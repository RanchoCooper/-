/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-23 01:04:19
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
void Vector<T>::unsort(Rank lo, Rank hi) {//等概率随机置乱区间[lo, hi)
	T* v = _elem + lo;
	for (Rank i = hi - lo; i > 0; --i)//自后向前, 将v[i-1]与v[0,i)中元素随机交换
		swap(v[i - 1], v[rand() % i]);
}