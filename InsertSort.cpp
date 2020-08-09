template< class T >
void insertSort(T* a, int size) 
{
    T tmp;
    for (int i = 1, j; i < size; ++i) // цикл проходов, i - номер прохода
    {
        tmp = a[i]; 
        for (j = i - 1; j >= 0 && a[j] > tmp; --j) // поиск места элемента в готовой последовательности 
            a[j + 1] = a[j];    // сдвигаем элемент направо, пока не дошли
        a[j + 1] = tmp; // место найдено, вставить элемент    
    }
}