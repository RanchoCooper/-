/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-23 01:14:20
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
T Vector<T>::remove(Rank r) {
	T e = _elem[r];//备份要删的元素
	remove(r, r+1);//调用区间删除  _remove_interval.h
	return e;
}