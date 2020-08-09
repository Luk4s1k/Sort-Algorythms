template< class T >
void selectSort(T* arr, int size) 
{
    T tmp;
    for(int i = 0; i < size; ++i) // i - номер текущего шага
    { 
        int pos = i; 
        tmp = arr[i];
        for(int j = i + 1; j < size; ++j) // цикл выбора наименьшего элемента
        {
            if (arr[j] < tmp) 
           {
               pos = j; 
               tmp = arr[j]; 
           }
        }
        arr[pos] = arr[i]; 
        arr[i] = tmp; // меняем местами наименьший с a[i]
    }
}