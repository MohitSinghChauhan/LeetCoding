**Algorithm: Dutch National Flag Algo**

Consider three pointers low = 0, mid = 0, high = nums.size() - 1

The algorithm ensures that at any point, every element before low is 0, every element after high is 2, every element in between are either 0, 1 or 2 i.e. unprocessed.

We'll use mid pointer to traverse and check the array elements i.e. while(mid <= high).

Three cases are possible:

* nums[mid] == 0 In this case `swap(nums[low], nums[mid])` and increment both low and mid pointer i.e. `low++ mid++`

* nums[mid] == 1 In this case `mid++`

* nums[mid] == 2 In this case `swap(nums[mid], nums[high])` and decrement high pointer i.e. `high--`
