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
	while (++lo < hi) {//自左向右, 逐一检查各对相邻元素
		if (_elem[lo] < _elem[lo - 1]) {
			sorted = false;
			swap(_elem[lo], _elem[lo - 1]);
		}
	}
	return sorted;//返回有序标志
}
//虽然可以检测整体有序以提高速度
//但不能检测出部分有序来跳过有序的区间