#include<iostream>
#include<vector>
#include<time.h>

using namespace std;

int main()
{   clock_t begin = clock();
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    int i,n = nums.size();
    vector<int> ans(n*2);
    for(i=0;i<n*2;i++)
    {
        ans[i] = nums[i%n];
        cout<<ans[i]<<endl;
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    cout<<"\n"<<time_spent;
    return 0;
}

