/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-22 00:40:10
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
int Vector<T>::disordered() const {//返回向量中逆序对相邻元素对的总数
	int n = 0;
	for (int i = 1; i < _size; ++i)
		if (_elem[i - 1] > _elem[i])
			++n;
	return n;//向量有序当且仅当n=0
}