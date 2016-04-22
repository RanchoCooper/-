/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-23 01:16:48
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
int Vector<T>::remove(Rank lo, Rank hi) {
	if (lo == hi) return 0;
	while (hi < _size)
		_elem[lo++] = _elem[hi++];
	_size = hi;
	shrink();//可能要缩容
	return hi - lo;//返回被删元素的个数
}