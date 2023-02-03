class Solution
{
public:
    int findPeak(vector<int> &arr, int n)
    {
        int s = 0, e = n - 1;
        while (s < e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] >= arr[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
        }
        return s;
    }

    int binarySearch(vector<int> &arr, int s, int e, int k)
    {
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] == k)
            {
                return mid;
            }

            else if (arr[mid] > k)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return -1;
    }

    int search(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == 1)
        {
            if (nums[0] == k)
            {
                return 0;
            }
            return -1;
        }
        else
        {
            
            int pivot = findPeak(nums, n);

            if (k <= nums[n - 1] && k >= nums[pivot])
            {
                cout << 1;
                return binarySearch(nums, pivot, n - 1, k);
            }

            else if (k >= nums[0] && k <= nums[pivot - 1])
            {
                cout << 2;
                return binarySearch(nums, 0, pivot - 1, k);
            }
            else
            {
                return -1;
            }
        }
    }
};