/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-30 00:30:04
 * header file of list
 */
#pragma once

#include "listNode.h" //引入列表节点类

template <typename T>
class List { //列表模版类
private:
	//规模, 头尾哨兵
	int _size;
	ListNodePosi(T) header;
	ListNodePosi(T) trailer;

protected:
	void init(); //列表创建时的初始化
	int clear(); //清楚所有节点
	void copyNodes(ListNodePosi(T), int); //复制列表中位置p起的n项
	void merge(ListNodePosi(T)&, int, List<T>&, ListNodePosi(T), int); //归并
	void mergeSort(ListNodePosi(T)&, int); //对从p开始连续的n个节点归并排序
	void selectionSort(ListNodePosi(T), int); //对p开始连续的n个节点选择排序
	void insertionSort(ListNodePosi(T), int); //对p开始连续的n个节点插入排序

public:
//构造函数
	List() { init(); }
	List(List<T> const& L); //整体复制列表L
	List(List<T> const& L, Rank r, int n); //复制列表L中第r项起的n项
	List(ListNodePosi(T) p, int n); //复制列表中位置p起的n项

//析构函数
	~List(); //释放所有节点(包含头尾节点在内)

//只读访问接口
	Rank size() const { return _size; } //规模
	bool empty() const { return _size <= 0; } //判空
	T& operator[](Rank r) const; //循秩访问, 效率低
	ListNodePosi(T) first() const { return header->succ; } //获取首节点位置
	ListNodePosi(T) last()  const { return trailer->pred;} //获取末节点位置
	bool valid(ListNodePosi(T) p) //判断位置p是否合法
		{ return p && (p != header) && (p != trailer); }
	int disordered() const; //判断列表是否已排序
	ListNodePosi(T) find(T const& e, int n, ListNodePosi(T) p) const; //无序区间查找
	ListNodePosi(T) find(T const& e) const //无序列表查找
		{ return find(e, _size, trailer); }
	ListNodePosi(T) search(T const& e, int n, ListNodePosi(T) p) const; //有序区间查找
	ListNodePosi(T) search(T const& e) const //有序列表查找
		{ return search(e, _size, trailer); }
	ListNodePosi(T) selectMax(ListNodePosi(T) p, int n); //在p及其n-1个后继中选出最大者
	ListNodePosi(T) selectMax() { return selectMax(header->succ, _size); } //整体最大者

//可写访问接口
	ListNodePosi(T) insertAsFirst(T const& e); //做首节点插入
	ListNodePosi(T) insertAsLast(T const&  e); //做末节点插入
	ListNodePosi(T) insertAfter(ListNodePosi(T)  p, T const& e); //e做p的后继插入
	ListNodePosi(T) insertBefore(ListNodePosi(T) p, T const& e); //e做p的前驱插入
	T remove(ListNodePosi(T) p); //删除合法位置p处的节点, 返回被删除的节点
	void merge(List<T>& L) { merge(first(), _size, L, L.first(), L._size); }//全列表归并
	void sort(ListNodePosi(T) p, int n); //列表区间排序
	void sort() { sort(first(), _size); } //列表整体排序
	int deduplicate(); //无序去重
	int uniquify(); //有序去重
	void reverse(); //前后倒置
//遍历
	void traverse(void(*) (T&));

	template<typename VST>
	void traverse(VST&);
};
