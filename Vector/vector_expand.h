/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-21 22:38:17
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
void Vector<T>::expand() {
	if (_size < _capacity) return;//尚未满员, 不必扩容
	if ( _capacity< DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY;

	T* oldElem = _elem;
	_elem = new T[_capacity <<= 1];//容量加倍
	for (int i = 0; i < _size; ++i)
		_elem[i] = oldElem[i];//T为基本类型或已经重载'='
	delete [] oldElem;//释放原空间

}