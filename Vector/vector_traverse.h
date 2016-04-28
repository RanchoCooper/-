/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-28 14:14:09
 * @brief
 * implement of class Vector
 */
#pragma once

//用函数指针或函数对象来遍历
template <typename T>
void Vector<T>::traverse(void(*visit) (T&)) {//函数指针机制
	for (int i = 0; i < _size; ++i)
		visit(_elem[i]);
}

template <typename T>
template <typename VST>
void Vector<T>::traverse(VST& visit) {//函数对象机制
	for (int i = 0; i < _size; ++i)
		visit(_elem[i]);
}