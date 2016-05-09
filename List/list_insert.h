/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-07 15:21:30
 *
 *
*/
#pragma once

template <typename T>
ListNodePosi(T) List<T>::insertAsFirst(T const& e) { //作为首节点插入
	_size++;
	return header-> insertAsSucc(e);
}
template <typename T>
ListNodePosi(T) List<T>::insertAsLast(T const& e) { //作为末节点插入
	_size++;
	return trailer->insertAsPred(e);
}
template <typename T>
ListNodePosi(T) List<T>::insertAfter(ListNodePosi(T) p, const& e) { //作为后继插入
	_size++;
	return p->insertAsSucc(e);
}
template <typename T>
ListNodePosi(T) List<T>::insertBefore(ListNodePosi(T), const& e) { //作为前驱插入
	_size++;
	return p->insertAsPred(e);
}


