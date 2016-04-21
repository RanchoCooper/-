/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-22 00:43:21
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
Rank Vector<T>::find(T const& e, Rank lo, Rank hi) const{
	//assert: 0 <= lo < hi <= _size
	while ((lo < hi--) && (e != _elem[hi]));
	return hi;//返回lo - 1时表明查找失败
}