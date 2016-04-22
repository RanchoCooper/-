/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-23 01:32:25
 * @brief
 * implement of class Vector
 */
#pragma once


template <typename T>
int Vector<T>::uniquify() {//有序向量重复元素剔除算法(低效)
	int oldSize = _size;
	int i = 1;
	while ( i < _size )//每遇到一个相同元素就进行移动操作
		_elem[i - 1] == _elem[i] ? remove ( i ) : i++;
	return oldSize - _size;//被删元素总数
}