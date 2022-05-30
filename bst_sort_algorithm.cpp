#include <iostream>
#include <vector>

template<typename iterator>
void bst_sort(iterator begin, iterator end)
{
    if (begin == end) {
    return;
    }
    for (auto i = begin + 1; i != end; ++i){
    auto value = *i;
    if (value < *begin) {
    std::copy_backward(begin, i, i + 1);
    *begin = value;
    } else {
    auto next = i;
    --next;
    while (value < *next) {
    *i = *next;
    i = next;
    --next;
    }
    *i = value;
    }
    }
}
template <typename T>
void sort(T* arr, int size)
{
    for (int i = 1; i < size; ++i) {
    int value = arr[i];
    int j = i - 1;
    while (value < arr[j] && j >= 0) {
    arr[j + 1] = arr[j];
    --j;
    }
    arr[j + 1] = value;
    }
}
int main()
{
   /* std::vector<int> i = {15,7,9,20,2};
    bst_sort(i.begin(),i.end());
    for(auto t : i)
    std::cout << t << " ";
    std::cout << std::endl;
    int arr[] = {15,7,9,20,2};
    int size = (sizeof(arr) / sizeof(arr[0]));
    sort(arr,size);
    for(int i = 0;i < size ;++i) {
    std::cout << arr[i] << " ";
    }
    return 0;*/
}

