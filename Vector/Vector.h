/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-21 00:09:56
 * @brief
 *
 */
#pragma once

 typedef int Rank;	//定义秩
 #define DEFAULT_CAPACITY 3		//默认初始容量

 template <typename T>
 class Vector {
protected:
	Rank _size;		//规模
	int _capacity;	//容量
	T* _elem;		//数据区

	void copyFrom(T const* A, Rank lo, Rank hi);//区间复制
	void expand();//空间不足时扩容
	void shrink();//装填因子过小时压缩

	//operation
	bool bubble(Rank lo, Rank hi);//扫描交换
	void bubbleSort(Rank lo, Rank hi);//冒泡排序
	Rank max(Rank lo, Rank hi);//选择最大元素
	void selectionSort ( Rank lo, Rank hi ); //选择排序算法
	void merge ( Rank lo, Rank mi, Rank hi ); //归并算法
	void mergeSort ( Rank lo, Rank hi ); //归并排序算法
	Rank partition ( Rank lo, Rank hi ); //轴点构造算法
	void quickSort ( Rank lo, Rank hi ); //快速排序算法
	void heapSort ( Rank lo, Rank hi ); //堆排序
public:
//构造函数
	Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0)//容量为c, 规模为s, 元素初始值为v
	{
		_elem = new T[_capacity = c];
		for (_size = 0; _size < s; _elem[_size++] = v);
	}

	Vector(T const* a, Rank n) { copyFrom(a, 0, n); }//数组整体复制
	Vector(T const* a, Rank lo, Rank hi) { copyFrom(a, lo, hi); }//区间
	Vector(Vector<T> const & v) { copyFrom(v._elem, 0, v._size); }//向量整体复制
	Vector(Vector<T> const & v, Rank lo, Rank hi) { copyFrom(v._elem, lo, hi); }//区间

//析构函数
	~Vector() { delete [] _elem; }//释放内部数组空间

//只读访问jiekou
	Rank size() const { return _size; }//规模
	bool empty() const { return !_size; }//判空
	int disordered() const;//判断向量是否已经排序
	Rank find(T const& e, Rank lo, Rank hi) const;//无序向量区间查找
	Rank find(T const& e) const { return find(e, 0, _size); }//无序向量整体查找
	Rank search(T const& e, Rank lo, Rank hi) const;//有序向量区间查找
	Rank search(T const& e) const//有序向量整体查找
	{
		return (0 >= _size) ? -1 : search(e, 0, _size);
	}

//可写访问接口
	T& operation[](Rank r) const;//重载下标操作符
	Vector<T>& operation=(Vector<T> const&);
	T remove(Rank r);//删除秩为r的元素
	int remove(Rank lo, Rank hi);//删除[lo, hi)之内的元素, 并返回所删除个数
	Rank insert(Rank r, T const& e);//插入元素
	Rank insert(T const& e) { return insert(_size, e); }//默认作为末元素插入

	void sort(Rank lo, Rank hi);//排序
	void sort() { sort(0, _size); }//整体排序
	void unsort(Rank lo, Rank hi);//置乱
	void unsort() { unsort(0, _size); }

	int deduplicate();//无序去重
	int uniquify();//有序去重
//遍历
	void traverse(void(*) (T&) );//使用函数指针遍历, 只读或全局性修改

	template <typename VST>
	void traverse(VST&);//使用函数对象遍历, 可全局性修改

};