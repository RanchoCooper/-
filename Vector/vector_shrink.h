/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-21 22:51:02
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
void Vector<T>::shrink() {//装填因子过小时压缩向量所占空间
	if (_capacity < DEFAULT_CAPACITY << 1) return;//不必压缩到DEFAULT_CAPACITY以下
	if (_size << 2 > _capacity) return;//以四分之一为界
	T* oldElem = _elem;
	_elem = new T[_capacity >>= 1];//容量减半
	for (int i = 0; i < _size; ++i)
		_elem[i] = oldElem[i];
	delete [] oldElem;//释放原空间
}