/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-05-01 21:58:25
 *
 */
#pragma once

template <typename T>
T& List<T>::operator[] (Rank r) const{ //重载下标错左幅, 通过秩访问列表节点(效率低, 慎用)
	ListNodePosi(T) p = first(); //从首节点出发
	while (0 < r--)
		p = p->succ;
	return p->data;
}