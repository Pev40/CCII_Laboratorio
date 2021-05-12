#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
    size = 0;
    arr = new Point[0];
}

DynamicArray::DynamicArray(const Point arr[], int size)
{
    this->size = size;
    this->arr = new Point[size];

    for (int i = 0; i < size; i++)
        this->arr[i] = arr[i];
}

DynamicArray::DynamicArray(const DynamicArray &o)
{
    this->size = o.size;
    this->arr = new Point[o.size];

    for (int i = 0; i < size; i++)
        this->arr[i] = o.arr[i];
}

void DynamicArray::push_back(Point elem)
{
    Point *tmp = new Point[size + 1];
    for (int i = 0; i < size; i++)
        tmp[i] = arr[i];

    tmp[size] = elem;

    delete[] arr;
    size += 1;
    arr = tmp;
}

void DynamicArray::insert(Point elem, int pos)
{
    Point *tmp = new Point[size + 1];
    for (int i = pos - 1; i < size; i++)
    {
        tmp[i + 1] = arr[i];
    }

    tmp[pos - 1] = elem;

    delete[] arr;
    size += 1;
    arr = tmp;
}

void DynamicArray::remove(int pos)
{
    Point *tmp = new Point[size - 1];
    for (int i = 0; i < size; i++)
    {
        if (i < pos - 1)
        {
            tmp[i] = arr[i];
        }
        else
        {
            if (i > pos - 1)
            {
                tmp[i - 1] = arr[i];
            }
        }
    }
    delete[] arr;
    size -= 1;
    arr = tmp;
}

DynamicArray::~DynamicArray()
{
    delete[] arr;
}