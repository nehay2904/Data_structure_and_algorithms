#include <iostream>
#include <vector>

using namespace std;

int findEquilibriumIndex(const vector<int>& nums){
    int n = nums.size();
    int totalSum =0;
    int leftSum =0;

    for (int i = 0; i < n; i++)
    {
       totalSum += nums[i];
    }
    
    for (int i = 0; i < n; i++)
    {
       totalSum -= nums[i];
       if(leftSum == totalSum){
         return i;
       }
       leftSum += nums[i];
    }
    return -1;


    
}


int main(){
    vector<int> nums = {-7,1,5,2,-4,3,0};
    int equilibriumIndex = findEquilibriumIndex(nums);

    cout<<"The equilibrium index is: "<<equilibriumIndex;


    return 0;
}