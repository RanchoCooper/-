/*
 * @author rancho
 * @email  rancho941110@gmail.com
 * @date   2016-05-01 23:15:43
 *
 */
#pragma once

template <typename T>
List<T>::List(ListNodePosi(T) p, int n) { //复制列表中位置p起的n项
	copyNodes(p, n);
}

template <typename T>
List<T>::List(List<T> const& L) { //整体复制列表L
	copyNodes(L.first(), L._size);
}

template <typename T>
List<T>::List(List<T> const& L, int r, int n) { //复制L中r项起的n项
	copyNodes(L[r], n);
}