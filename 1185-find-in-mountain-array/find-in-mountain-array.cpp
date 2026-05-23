/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {

        int n = mountainArr.length();

        int i = 1, j = n - 2, pivot = -1;

        while(j >= i)
        {
            int mid = (i + j) / 2;

            int curr = mountainArr.get(mid);
            int next = mountainArr.get(mid + 1);

            if(curr < next)
            {
                i = mid + 1;
            }
            else
            {
                pivot = mid;
                j = mid - 1;
            }
        }

        pivot = i;

        i = 0;
        j = pivot;

        int x = -1;

        while(j >= i)
        {
            int mid = (i + j) / 2;

            int curr = mountainArr.get(mid);

            if(curr == target)
            {
                x = mid;
                break;
            }
            else if(curr > target)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }

        if(x != -1)
            return x;

        i = pivot + 1;
        j = n - 1;

        int y = -1;

        while(j >= i)
        {
            int mid = (i + j) / 2;

            int curr = mountainArr.get(mid);

            if(curr == target)
            {
                y = mid;
                break;
            }
            else if(curr > target)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }

        return y;
    }
};