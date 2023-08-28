//  import all the dependencies
#include <iostream>
#include <vector>
using namespace std;


// initial a class
class ArrayManager{
    public:
    //  initial the data types and structures
    vector<int> nums;


    
    ArrayManager(const vector<int> &initialArr) : nums(initialArr) {}
    
    //  display data
    void displayArray(){
        cout<< "Array: ";
        for (int num : nums)
        
            cout<< num <<" ";
            cout<<endl;
        
        
     }
    int findEle(int key){

        for (int i = 0; i < nums.size(); i++)
       
            if(nums[i] == key)
              return i;
            /* code */
           return -1;
        
     }


     void deleteEle(int key){
        int pos = findEle(key);

        if(pos == -1){
            cout<<"Element not found";
            return;
        }
        nums.erase(nums.begin() + pos);
        cout<< "Element is deleted successfully" <<endl;

     }
};

int main(){
    vector<int> intialArr = {10,20,30,40,50};

    ArrayManager arrayMan(intialArr);

    arrayMan.displayArray();

    int key = 30;
    arrayMan.deleteEle(key);

    arrayMan.displayArray();

    return 0;
}