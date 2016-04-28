/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-22 00:06:50
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
Rank Vector<T>::bubble(Rank lo, Rank hi) {
	Rank last = lo;//最右侧的逆序对初始化为[lo - 1, lo]
	while (++lo < hi)
		if (_elem[lo - 1] > _elem[lo]) {
			last = lo;//更新最右侧逆序对的位置
			swap(_elem[lo - 1], _elem[lo]);
		}
	return last;
}
//改进的思路在于将整体有序标志替换为最右侧逆序对的位置
//这样在while循环中可以直接让hi跳过有序片段