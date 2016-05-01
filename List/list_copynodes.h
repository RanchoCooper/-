/*
 * @author rancho
 * @email  rancho941110@gmail.com
 * @date   2016-05-01 22:33:37
 *
 */
#pragma once

template <typename T>
void List<T>::copyNodes(ListNodePosi(T) p, int n) { //p合法, 且至少有n-1个真后继节点
	init(); //创建头尾哨兵
	while (n--) {
		insertAsLast(p->data);
		p = p->succ;
	}
}