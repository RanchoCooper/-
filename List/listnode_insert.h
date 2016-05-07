/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-07 15:32:57
 *
 */
#pragma once

template <typename T>
ListNodePosi(T) ListNode<T>::insertAfer(T const& e) {
	ListNodePosi(T) x = new ListNode(e, this, succ);
	succ->pre = x;
	succ = x;
	return x;
}

template <typename T>
ListNodePosi(T) ListNode<T>::inserBefore(T const& e) {
	ListNodePosi(T) x = new ListNode(e, pred, this);
	pred->succ = x;
	pred = x;
	return x;
}
