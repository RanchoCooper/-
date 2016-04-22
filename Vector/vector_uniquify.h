/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-23 01:21:10
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
int Vector<T>::uniquify() {//有序向量重复元素剔除算法(高效)
	Rank i = 0, j = 0;
	while (++j < _size)
		if (_elem[i] != _elem[j])//跳过相同元素
			_elem[i++] = _elem[j];//将下一个互异元素前置
	_size = ++i;
	shrink();
	return j - i;//被删除元素总数

}