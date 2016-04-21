/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-22 00:51:22
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
Rank Vector<T>::insert(Rank r, T const& e) {
	expand();//若有必要则扩容
	for (int i = _size; i > r; --i)
		_elem[i] = _elem[i - 1];
	_elem[r] = e;
	_size++;
	return r;
}