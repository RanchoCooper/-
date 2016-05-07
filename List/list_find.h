/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-07 14:53:42
 *
 * 无序列表区间查找(向前和向后)
 */
#pragma once

template <typename T>
ListNodePosi(T) List<T>::find(T const& e, int n, ListNodePosi(T) p) const {
	while (0 < n--)
		if (e == (p = p->pred)->data)
			return p;
	return nullptr;
}

template <typename T> List<T>::find(T const& e, ListNodePosi(T) p, int n) const {
	while (0 < n--)
		if (e == (p = p->succ)->data)
			return p;
	return nullptr;
}