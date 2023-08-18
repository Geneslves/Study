#include "1SSTable.h"
#include "stdio.h"

int Binar_Search(SSTable L, ElemType key)
{
    int low = 0, high = L.TableLen - 1, mid = 0;
    while (low <= high)
    {
        mid = (low + high) * 0.5;
        if (L.elem[mid] == key)
        {
            return mid;
        }
        else if (L.elem[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}