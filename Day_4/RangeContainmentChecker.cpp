#include "RangeContainmentChecker.h"

bool RangeContainmentChecker::is_range_contained_part_one(int start1, int end1, int start2, int end2)
{
    if (start1 >= start2 && end1 <= end2) {
        return true;
    }
    if (start2 >= start1 && end2 <= end1) {
        return true;
    }
    return false;
}

bool RangeContainmentChecker::is_range_contained_part_two(int start1, int end1, int start2, int end2) {
    if ((start1 <= end2 && end1 >= start2) || (start2 <= end1 && end2 >= start1)) {
        return true;
    }
    return false;
}
