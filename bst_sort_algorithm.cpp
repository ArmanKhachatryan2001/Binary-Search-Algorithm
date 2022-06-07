#include <iostream>

template<typename iterator>
void bst_sort(iterator begin, iterator end) // with iterators
{
    if (begin == end) {
        return;
    }
    for (iterator i = begin + 1; i != end; ++i){
        auto value = *i;
        if (value < *begin) {
            std::copy_backward(begin, i, i + 1);
            *begin = value;
        } else {
            auto item = i;
            --item;
            while (value < *item) {
                *i = *item;
                i = item;
                --item;
            }
            *i = value;
        }
    }
}
template <typename T>
void sort(T* arr, int size) //implemented for a simple array
{
    for (int i = 1; i < size; ++i) {
        T value = arr[i];
        int j = i - 1;
        while (value < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = value;
    }
}
