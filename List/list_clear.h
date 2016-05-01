/*
 * @author rancho
 * @email  rancho941110@gmail.com
 * @date   2016-05-01 22:03:10
 *
 */
#pragma once

template <typename T>
int List<T>::clear() { //清空列表
	int oldSize = _size;
	while (0 < _size)
		remove(header->succ);
	return oldSize;
}