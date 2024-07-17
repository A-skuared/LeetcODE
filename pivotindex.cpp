// find that index where sum of all left elements = sum of all right elements
//  if no such index exists , return -1

//LEETCode - 724

#include <iostream>
#include <vector>

using namespace std;
/*
int bruteForce(vector <int> &nums)
{
    int n = nums.size() - 1;
    int pivot = 0;
    while (pivot <= n)
    {
        int lsum = 0;
        int rsum = 0;
        for (int i=0;i<pivot;i++)
        {
            lsum = lsum + nums[i];
        }
        for (int j=pivot+1;j<=n;j++)
        {
            rsum = rsum + nums[j];
        }
        if (lsum == rsum)
        {
            return pivot;
        }
        else
        {
            pivot ++;
        }
    }
    return -1;
}
*/
int pivotIndex(vector<int> &nums)
{
    int lsum = 0;
    int rsum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        rsum = rsum + nums[i];
    }
    for (int pivot = 0; pivot < n; pivot++)
    {
        rsum = rsum - nums[pivot];
        if (lsum == rsum)
        {
            return pivot;
        }
        lsum = lsum + nums[pivot];
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int ans = pivotIndex(nums);
    if (ans == -1)
    {
        cout << "No Pivot Index Exists";
    }
    else
    {
        cout << "Pivot Index :" << ans;
    }
    return 0;
}