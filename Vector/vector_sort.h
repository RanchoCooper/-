/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-23 01:10:26
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
void Vector<T>::sort ( Rank lo, Rank hi ) { //向量区间[lo, hi)排序
	switch ( rand() % 5 ) { //随机选取排序算法
		case 1:  bubbleSort ( lo, hi ); break;
		case 2:  selectionSort ( lo, hi ); break;
		case 3:  mergeSort ( lo, hi ); break;
		case 4:  heapSort ( lo, hi ); break;
		default: quickSort ( lo, hi ); break;
	}
}