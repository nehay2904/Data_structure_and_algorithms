#include <iostream>
#include <vector>

using namespace std;

class Arraymanager{
    public:

    vector<int> nums;

    Arraymanager(const vector<int> &initialArr) : nums(initialArr) {}
   
   void displayArr(){
    for (int num : nums)
       cout<<num <<" ";

     }  
    
    void insertEle(int key){
       nums.push_back(key);
    }

    
};

int main(){
    vector<int> nums = {1,2 ,3 ,4};
    int key = 5;

    Arraymanager arrayman(nums);
   

    cout<<"Array before insertion:  ";
    arrayman.displayArr();
    cout<<endl;

    arrayman.insertEle(key);

    cout<<"Array after insertion:  ";
    arrayman.displayArr();
    cout<<endl;
    

    return 0;
}