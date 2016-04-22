/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-22 21:16:12
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
Vector<T>& Vector<T>::operator=(Vector<T> const& v) {
	if (_elem) delete [] _elem;
	copyFrom(v._elem, 0, v.size());
	return *this;
}