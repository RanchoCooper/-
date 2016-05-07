/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-07 20:35:41
 *
 */
#pragma once

template <typename T>
int List<T>::uniquify() { //有序列表的唯一化
	if (_size < 2) return 0;
	int oldSize = _size;
	ListNodePosi(T) p = first();
	ListNodePosi(T) q = ;
	while (trailer != (q = p->succ)) {
		if (p->data != q->data)
			p = q;
		else
			remove(q);
	}
	return oldSize - _size;
}
