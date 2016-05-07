/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-07 20:51:25
 *
 */
#pragma once

template <typename T> //在有序列表节点p的n个前驱中找不大于e的最后者
ListNodePosi(T) List<T>::search(T const& e, int n, Posi(T) p) const {
	while (0 <= n--)
		if (((p->pred) -> data) <= e)
			break;
	return p;
}

