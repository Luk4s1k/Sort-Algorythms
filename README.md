# Sort-Algorythms
Most popular sort algorithms in C++ 

## 1. Selection sort

The idea behind this method is to create a sorted sequence of attaching one element after another to it in the correct order. If the input sequence is almost ordered, then there will be the same number of comparisons, which means the algorithm behaves unnaturally.


## 2. Bubble sort

The idea behind the method: the sorting step consists of going from bottom to top through the array. Pairs of neighboring elements are seen along the way. If the elements of a pair are in the wrong order, then we swap them.
Implementation on С++



Additional memory is obviously not required. The behavior of the improved (but not the initial) method is quite natural, an almost sorted array will be sorted much faster than a random one. Bubble grading is stable, but shaker grading loses this quality.
In practice, the bubble method, even with improvements, is too slow. Therefore, it is almost never used.

## 3. Insertion sort

Sorting by simple inserts is somewhat similar to the above methods.
Implementation on С++

Similar to selection sort, the average and the worst number of comparisons and hops are evaluated as O (n ^ 2), with no additional memory used.

A good indicator of sorting is a very natural behavior: an almost sorted array will be sorted very quickly. This, coupled with the robustness of the algorithm, makes the method a good choice in appropriate situations.

The algorithm can be improved slightly. Note that at each step of the inner loop, 2 conditions are checked. You can combine them into one by placing a special watchdog at the beginning of the array. It must be obviously smaller than all other array elements.

## 4. Shell sort

Shell sort is a rather interesting modification of the insertion sort algorithm.
Implementation on С++

## 5. Quick Sort

Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

-Always pick first element as pivot.
-Always pick last element as pivot (implemented below)
-Pick a random element as pivot.
-Pick median as pivot.
The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.
