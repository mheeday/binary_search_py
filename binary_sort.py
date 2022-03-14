from timeit import timeit
import random

def binary_sort(entry_list, item):
    #entry_list = sorted(entry_list)
    if entry_list[0] == item:
        return 0
    elif entry_list[len(entry_list)-1] == item:
        return len(entry_list)-1
    else:
        bias = 0
        while len(entry_list) > 1:
            half = int(len(entry_list)/2)
            if item == entry_list[half]:
                return half+bias
            elif item < entry_list[half]:
                entry_list = entry_list[:half]
                continue
            else:
                entry_list = entry_list[half:]
                bias += half
    return -1

def normal_find(arr, to_find):
    for i in range(len(arr)):
        if arr[i] == to_find:
            return i

    return -1


arr = sorted([random.randint(0, 99999999) for i in range(1000)])
to_find = random.randint(0, 100)
arr.append(to_find)

print(timeit("binary_sort(arr, to_find)", 'from __main__ import binary_sort, arr, to_find', number=10000))
print(timeit("normal_find(arr, to_find)", 'from __main__ import normal_find, arr, to_find',  number=10000))
