/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-28 21:00:46
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
void Vecoter::mergeSort(Rank lo, Rank hi) {
	if (hi - lo < 2) return;//平凡情况
	int mid = (hi - lo) >> 1;//以中点为界
	mergeSort(lo, mid);
	mergeSort(mid, hi);
	merge(lo, mid, hi);
}