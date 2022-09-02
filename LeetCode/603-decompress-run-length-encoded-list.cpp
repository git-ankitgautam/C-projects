#include<iostream>
#include<vector>
#include<time.h>


using namespace std;

int main()
{   clock_t begin = clock();
    vector<int> ans;
    int j,i=0;
    vector<int> nums(4);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    while(i<nums.size())
    { 
        for(j=0;j<nums[i];j++)
        {
            ans.push_back(nums[i+1]);
        }
        i+=2;
    }

    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    cout<<"\n"<<time_spent;
    return 0;
}



        