/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-07 20:08:45
 *
 */
#pragma once

template <typename T>
T List<T>::remove(ListNodePosi(T) p) { //删除合法节点p, 并返回值
	T e = p->data; //类型T 可以赋值
	p->pred->succ = p->succ;
	p->succ->pred = p->pred;
	delete p;
	_size--;
	return e;
}
