/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-07 20:22:08
 *
 */
#pragma once

template <typename T>
int List<T>::deduplicate() { //剔除无序列表中的重复节点
	if (_size < 2) return 0;
	int oldSize = _size; //记录原始规模
	ListNodePosi(T) p = header;
	Rank r = 0;
	while (trailer != (p = p->succ)) {
		ListNodePosi(T) q = find(p->data, r, p); //在p的r个前驱中查找
		q? remove(q) : r++;
	}
	return oldSize - _size;
}
