#include<iostream>
#include<limits.h> 
#include<vector>
#include<stdint.h>
#include<algorithm>
//#include <bits/stdc++.h>


namespace N
{
void find_largest_sum(const uint32_t T, const std::vector<uint32_t> &I,
                        std::vector<uint32_t> &M, uint32_t &S)
{
    // sort(I.begin(),I.end(), greater<int>());/
    uint32_t left = 0;
    uint32_t right = I.size() - 1;
    
    uint32_t opt_right= 0;
    uint32_t opt_left= 0;
    uint32_t opt_sum = 0;
    while(left < right)
    {
        uint32_t sum = I[left] + I[right];
        if(sum == T)
        {
            M.push_back(I[left]);
            M.push_back(I[right]);
            S = sum;
            return;
        }
        else if(sum < T)
        {
            if(sum > opt_sum)
            {
                opt_right = I[right];
                opt_left = I[left];
                opt_sum = sum;
            }
            left++;
        }
        else if (sum > T)
        {
            right--;
        }
    }
    
    M.push_back(opt_right);
    M.push_back(opt_left);
    S = opt_sum;
    
    return;
}
   

}
