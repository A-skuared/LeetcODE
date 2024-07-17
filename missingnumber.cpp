//Given an array nums containing n distinct numbers in the range [0, n]
//return the only number in the range that is missing from the array

//LEETCode - 268

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

/*
int bruteForce(vector <int> &nums)
{
    int n = nums.size()-1;
    sort(nums.begin(),nums.end());
    if (nums[0] == 0)
    {
        for (int i =0;i<n;i++)
        {
            if (nums[i+1]-nums[i]>1)
            {
                int ans = nums[i]+1;
                return ans;
            }
        }
        return n+1;
    }
    else
    {
        return 0;
    }
}
*/

int missingIndex(vector <int> &nums)
{
    int ans = 0;
    int n = nums.size();
    for (int i=0;i<=n;i++)
    {
        ans = ans ^ i;
    }
    for (int i=0;i<n;i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

int main()
{
    vector <int> nums = {9,6,4,2,8,5,7,0,1};
    int ans = missingIndex(nums);
    cout<<"Missing Number is : "<<ans;
    return 0;
}