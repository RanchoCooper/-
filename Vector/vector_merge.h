/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-28 21:13:58
 * @brief
 * implement of class Vector
 */
#pragma once

template <typename T>
void Vector<T>::merge(Rank lo, Rank mid, Rank hi) {//合并有序的子向量[lo,mi)和[mi,hi)
	//A为合并后的向量, B为[lo, mid), C为[mid, hi)
	//i, j, k分别标识ABC片段中的位置
	T* A = _elem + lo;//合并后的向量
	int b_len = mid - lo;
	int c_len = hi - mid;
	T* B = new T[b_len];//前子向量,另辟内存
	T* C = _elem + mid;//后子向量

	for (Rank i = 0; i < b_len; B[i] = A[i++]);//复制前子向量
	//开始合并, 循环条件为bc中任意一个未越界
	for (Rank i = 0, j = 0, k = 0; (j < b_len) || (k < c_len); ) {
		//将B[j]和C[k]中的小者放入A末尾
		//条件: 本片段未越界 && ( 元素更小 || 对方片段已越界 )
		if ( (j < b_len) && (B[j] < C[k] || !(k < c_len) ) ) A[i++] = B[j++];
		if ( (k < c_len) && (C[k] < B[j] || !(j < b_len) ) ) A[i++] = C[k++];
	}
	delete [] B;
}