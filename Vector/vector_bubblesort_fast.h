/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-22 00:17:47
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
void Vector<T>::bubbleSort(Rank lo, Rank hi) {
	//assert: 0 <= lo < hi <= size
	while (lo < (hi = bubble(lo, hi)));
}