# binary_search_py
Python Binary Search Function

Is binary search really faster than the usual linear search? 
Well, Yes and No.

What consumes most of the time is sorting the array, so we now have some scenrios.

Is the given list sorted already?  This case is most likely because data is usally unorganized.
This will make sorting part of the binary search function and thus reduces its speeed.

Assuming we want to test the speed of the binary and linear search, don't you feel sorting the list before calling the function is going to give advantage to the binary search????? Becaue the linear reach doesn't really need its element arranged.


So, if sorting the array is going to be part of the binary search, binary search is slower.
