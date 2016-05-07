/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-07 14:53:42
 *
 * 在无序列表的节点p的前n个前驱中找到等于e的最后者
 */
#pragma once

template <typename T>
ListNodePosi(T) List<T>::find(T const& e, int n, ListNodePosi(T) p) cosnt{
	while (0 < n--)
		if (e == (p = p->pred)->data)
			return p;
	return nullptr;
}
