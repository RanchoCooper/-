/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-21 23:47:39
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
bool Vector<T>::bubble(Rank lo, Rank hi) {//一趟扫描交换
	bool sorted = true;//整体有序标志
	while (++lo < hi)
		if (_elem[lo - 1] > _elem[lo]) {
			sorted = false;
			swap(_elem[lo - 1], _elem[lo]);
		}
	return sorted;
}