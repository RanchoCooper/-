/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-09 20:56:47
 *
 * Brief:
 */
#pragma once

template <typename T>
void List<T>::insertionSort(ListNodePosi(T) p, int n) {
    for (int r = 0; r < n; ++r) {
        insertAfter(search(p->data, r, p), p->data);
        p = p->succ;
        remove(p->pred);
    }
}
