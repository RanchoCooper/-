/*
 * @author: Rancho (rancho941110@gmail. com)
 * @date  : 2016-05-09 14:52:17
 *
 * Brief: 列表的选择排序算法：对起始于位置p的n个元素排序
 */
#pragma once

template <typename T>
void List<T>::selectionSort(ListNodePosi(T) p, int n) {
    ListNodePosi(T) head = p->pred;
    ListNodePosi(T) tail = p;
    for (int i = 0; i < n; ++i)
        tail = tail->succ;
    while (1 < n) {
        ListNodePosi(T) max = selectMax(head->succ, n);
        insertBefort(tail, remove(max));
        tail = tail->pred;
        n--;
    }
}

template <typename T>  //从起始于位置p的n个元素中选出最大者
ListNodePosi(T) List<T>::selectMax(ListNodePosi(T) p, int n) {
    ListNodePosi(T) max = p;
    for (ListNodePosi(T) cur = p; 1 < n; --n)
        if ((cur = cur->succ)->data > max->data)
            max = cur;
    return max;
}
