/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-30 00:32:02
 * head file of listNode
 */
#pragma once

typedef int Rank; //定义秩
#define ListNodePosi(T) ListNode<T>* //节点位置

template <typename T>
struct ListNode { //列表节点模版类(双向链表形式实现)
//成员: 数值, 前驱, 后继
	T data;
	ListNodePosi(T) pred;
	ListNodePosi(T) succ;

//构造函数
	ListNode() {} //针对header和trailer的构造
	ListNode(T e, ListNodePosi(T) p = nullptr, ListNodePosi(T) s = nullptr)
		: data(e), pred(p), succ(s) {} //默认构造器

//操作接口
	ListNodePosi(T) insertAsPred(T const& e);
	ListNodePosi(T) insertAsSucc(T const& e);
};

template <typename T>
ListNodePosi(T) ListNode<T>::insertAsPred(T const& e) {
	ListNodePosi(T) x = new ListNode(e, pred, this);//创建新节点
	pred->succ = x;
	pred = x;
	return x; //返回新节点的位置
}

template <typename T>
ListNodePosi(T) ListNode<T>::insertAsSucc(T const& e) {
	ListNodePosi(T) x = new ListNode(e, this, succ);//创建新节点
	succ->pred = x;
	succ = x;
	return x; //返回新节点的位置
}