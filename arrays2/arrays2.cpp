#include <iostream>
using namespace std;

int main()
{
    cout << "Task 1--------------------------------------------------------------------------------------------------\n\n";

    const int size1 = 20;
    int arr1[size1];
    srand(time(0));

    //заполение масива
    for (int i = 0; i < size1; i++)
    {
        arr1[i] = -size1 + rand() % 41;
    }

    //вывод масива
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << ", ";
    }
    cout << endl;

    int max1 = 0;
    int min1 = 0;

    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] > max1)
        {
            max1 = arr1[i];
        }
        else
        {
            min1 = arr1[i];
        }
    }
    cout << "Maximum number: " << max1 << endl;
    cout << "Minimum number: " << min1 << endl;


    cout << "\n\nTask 2--------------------------------------------------------------------------------------------------\n\n";

    const int size2 = 20;
    int arr2[size2];
    srand(time(0));
    int start2, end2, value;
    int sum2 = 0;

    cout << "Enter the start of range: ";
    cin >> start2;

    cout << "Enter the end of range: ";
    cin >> end2;

    cout << "Enter value: ";
    cin >> value;

    //заполение масива
    for (int i = 0; i < size2; i++)
    {
        arr2[i] = start2 + rand() % (end2 - start2 + 1);
    }

    //вывод масива
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << ", ";
    }
    cout << endl;

    for (int i = 0; i < size2; i++)
    {
        if (arr2[i] < value)
        {
            sum2 += arr2[i];
        }
    }

    cout << "Sum = " << sum2 << endl;


    cout << "\n\nTask 3--------------------------------------------------------------------------------------------------\n\n";

    const int month = 12;
    int profit[month];
    int start, end;

    for (int i = 0; i < month; i++)
    {
        cout << "Enter your profit for month " << i + 1 << ": ";
        cin >> profit[i];
    }

    cout << "Enter the start of the range: ";
    cin >> start;

    cout << "Enter the end of the range: ";
    cin >> end;

    int max = start - 1;
    int min = end - 1;

    for (int i = start; i < end - 1; i++)
    {
        if (profit[i] > profit[max])
        {
            max = i;
        }
        if (profit[i] < profit[min])
        {
            min = i;
        }
    }

    cout << "Month with minimum profit: " << min + 1 << endl;
    cout << "Month with maximum profit: " << max + 1 << endl;

    cout << "\n\nTask 4--------------------------------------------------------------------------------------------------\n\n";
    /* 
    В одномерном массиве, состоящем из N вещественных
    чисел вычислить :
        ■ Сумму отрицательных элементов.
        ■ Произведение элементов, находящихся между min и max
        элементами.
        ■ Произведение элементов с четными номерами.
        ■ Сумму элементов, находящихся между первым и последним отрицательными элементами.
    */

    const int size = 20;
    int arr[size];
    srand(time(0));
    int sum = 0;

    // Заполнение массива
    for (int i = 0; i < size; i++)
    {
        arr[i] = -size + rand() % 41;
    }

    // Вывод массива
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;

    //1 задание( сумма отрицательных элементов.)
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            sum += arr[i];
        }
    }


    //2 задание(призвидение элементов между минимум и максимом)
    int max4 = arr[0];
    int min4 = arr[0];
    int indexMax = 0;
    int indexMin = 0;
    int product1 = 1;
    int startIndex, endIndex;


    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max4)
        {
            max4 = arr[i];
            indexMax = i;
        }
        if (arr[i] < min4)
        {
            min4 = arr[i];
            indexMin = i;
        }
    }
 
    // определяем начальный и конечный индекс
    if (indexMax > indexMin)
    {
        startIndex = indexMin + 1;
        endIndex = indexMax;
    }
    else
    {
        startIndex = indexMax + 1;
        endIndex = indexMin;
    }

    for (int i = startIndex; i < endIndex; i++)
    {
        product1 *= arr[i];
    }


    //3 задание( произвидение элементов с четными индексами)
    int evenProduct = 1;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            evenProduct *= arr[i];
        }
    }

    //4 задание(Сумму элементов, находящихся между первым и последним отрицательными элементами)
    int firstNegative = -1;
    int lastNegative = -1;
    int sumNegatives = 0;

    // Нахождение индексов первого и последнего отрицательных элементов
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (firstNegative == -1)
            {
                firstNegative = i;
            }
            lastNegative = i;
        }
    }

    // Вычисление суммы элементов между первым и последним отрицательными элементами
    for (int i = firstNegative + 1; i < lastNegative; i++)
    {
        sumNegatives += arr[i];
    }

    cout << "Sum of negative elements: " << sum << endl;
    cout << "Product of elements between min and max: " << product1 << endl;
    cout << "Product of elements with even indices: " << evenProduct << endl;
    cout << "Sum of elements between first and last negative elements: " << sumNegatives << endl;

    return 0;
}



