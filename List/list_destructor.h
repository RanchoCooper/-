/*
 * @author rancho
 * @email  rancho941110@gmail.com
 * @date   2016-05-01 22:28:43
 *
 */
#pragma once

template <typename T>
List<T>::~List() { //列表析构器, 不保留头尾哨兵
	clear();
	delete header;
	delete trailer;
}