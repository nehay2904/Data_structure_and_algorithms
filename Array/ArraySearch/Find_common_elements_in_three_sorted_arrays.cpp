#include <iostream>
#include <vector>

using namespace std;

vector<int> findCommonElement( const vector<int> & nums1, const vector<int> & nums2, const vector<int> & nums3){

   vector<int> result;
   int i =0, j= 0 , k =0;

   while (i < nums1.size() && j < nums2.size() && k < nums3.size())
   {
    if(nums1[i] == nums2[j] && nums2[j] == nums3[k]){
        result.push_back(nums1[i]);
        i++;
        j++;
        k++;
    }else if(nums1[i] < nums2[j]){
        i++;
    }else if(nums2[j] < nums3[k]){
        j++;
    }else{
        k++;
    }
   }
   return result;
}

int main(){
    vector <int> nums1 = {1,2,3,4,5,6,7,8,9,10};
    vector <int> nums2 = {2,4,6,8,10};
    vector <int> nums3 = {10,20,30,40,50};

    vector<int> commonElement = findCommonElement(nums1, nums2, nums3);

    cout<<"Common elements: ";
    for (int num : commonElement)
    {
        cout<< num <<" ";
    }
    cout<< endl;

    return 0;
    
}