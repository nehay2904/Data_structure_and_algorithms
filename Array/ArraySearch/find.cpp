#include <iostream>
#include <vector>

using namespace std;

vector<int> findCommonElements(const vector<int>& arr1, const vector<int>& arr2, const vector<int>& arr3) {
    vector<int> result;
    int i = 0, j = 0, k = 0;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            result.push_back(arr1[i]);
            i++;
            j++;
            k++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }

    return result;
}

int main() {
    vector<int> arr1 = {1, 2,3,4,5,6,7,8,9,10};
    vector<int> arr2 = {2,4,6,8,10};
    vector<int> arr3 = {10,20, 30, 40};

    vector<int> commonElements = findCommonElements(arr1, arr2, arr3);

    cout << "Common Elements: ";
    for (int num : commonElements) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
