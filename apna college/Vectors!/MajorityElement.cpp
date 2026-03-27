#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int>& nums)
{
    int n = nums.size();
    vector<int> result;

    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
                count++;
        }
        if(count > n / 2)
            result.push_back(nums[i]);
    }
    return result;
}

int main()
{
    vector<int> nums = {2, 2, 1, 2, 3, 2, 2};
    vector<int> result = majorityElement(nums);
    for(int num : result)
        cout << num << " ";
    return 0;
}