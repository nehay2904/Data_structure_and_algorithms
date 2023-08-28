#include <iostream>
#include <vector>

using namespace std;

vector<int> findLeaders(const vector<int>& nums){
    vector<int> leaders;
    int maxRight = nums.back();

    for (int i = nums.size() -2 ; i >= 0; i--)
    {
       if (nums[i] > maxRight)
       {
          maxRight = nums[i];
          leaders.push_back(maxRight);
       }
       
    }

    leaders.push_back(nums.back());

    return leaders;
    
}

int main(){
    vector <int> nums =  {16, 17, 4, 3, 5, 2};;

    vector<int> commonElement = findLeaders(nums);

    cout<<"Leader elements: ";
    for (int num : commonElement)
    {
        cout<< num <<" ";
    }
    cout<< endl;

    return 0;
};