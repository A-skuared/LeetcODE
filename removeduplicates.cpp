//return no. of unique elements present in an array which is already sorted
//we use 2 pointer approach
//LEETCode - 26

#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector <int> &nums)
{
    int n=nums.size();
    int j = 0;
    for (int i = 1;i<n;i++)
    {
        if (nums[i] != nums[j])
        {
            j++;
            nums[j] = nums[i];
        }
    }
    int k = j+1;
    for (int i=0;i<k;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    for (int i=k;i<n;i++)
    {
        nums.pop_back();
    }
    return k;
}

int main()
{
    vector <int> nums = {0,1,1,2,3,3,3,3,4};
    int ans = removeDuplicates(nums);
    cout<<"No. of Unique Elements : "<<ans;
    return 0;
}