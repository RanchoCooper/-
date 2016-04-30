/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-30 23:33:49
 *
 */
#pragma once

template <typename T>
T& Vector<T>::operator[] (Rank r) const {//重载下标操作符
	return _elem[r]; //assert: 0 <= r < _size
}