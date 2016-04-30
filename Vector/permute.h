/*
 * @author rancho cooper
 * @email  rancho941110@gmail.com
 * @date   2016-04-30 23:40:52
 *
 */
#pragma once

template <typename T>
void permute(Vector<T>& v) {//随机置乱, 使得各元素等概率出现在各个位置
	for (int i = v.size(); i > 0; i--)
		swap(v[i - 1], v[rand() % i]);
}