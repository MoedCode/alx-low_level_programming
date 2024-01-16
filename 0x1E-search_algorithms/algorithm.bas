/\*
search value

val = 6
mid = (lef + right) / 2
right portion of array always greater than left
left right mid
0 9 4 val > md val could be on the right && left will start from index (mid+1) after mid index right is last index
5 9 7 val < md val could be on the left portion of array sure right = mid -1 that mid_idx left remains the same
5 6 5 val > md left
6 6 6 val = md return mid
mid_Idx < search_value :
left = mid + 1 since the left is the starting point and array is sorted in ascending oder value will be exist in right portion
in other words move the left side to start from Idx that greater than mid_Isx mid_Idx + 1
in other words shift search area to right means increasing the right over mid by 1 by mid + 1
right = still as it is or = previous right
in other words shift search area to right means increasing the by mid + 1
mid = left + right / 2

mid_idx > search_value:
search_value could be on the left side before that mid_Idx or not exist we go throw the left portion
left portion will end befor mid_Idx so
in other words shift search area to left means decreasing left than the mid by 1 mid - 1

    right = mid_Idx - 1
    left still the same
    mid = left + right / 2

STOP condition left_Idx < right_idx
lats say we have a number 10 which if not exist the 4 previous steps will pe the same
left right mid comparision
0 9 4 val > md left = mid + 1 => 4 + 1 = 5# :: right = 9#
5 9 7 val < md left = 5# :: right = mid - 1 => 7 - 1 = 6#
5 6 5 val > md left = mid + 1 => 5 + 1 = 6# :: right = 6#
6 6 6 val > md left = mid + 1 => 6 + 1 = 7# :: right = 6#
LEFT > RIGHT XXXXXX STOP XXXXXXXX
\*/
