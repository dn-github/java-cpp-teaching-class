#include<iostream>
#include<vector>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size(); // O(1)
    
    int max = 1;
    for(int i = 1; i < n-1; i++) {  // O(N)
        if(arr[i] > arr[max])
            max = i;
    }
    
    return max;
}

int main() {
    int num;
    std::cout<<"enter number of elements"<<std::endl;
    std::cin>>num;

    vector<int> arr;
    int elem;
    for(int i = 0; i < num; i++) {
        std::cout<<"Enter element"<<std::endl;
        std::cin>>elem;
        arr.push_back(elem);
    }

    std::cout<<"The peak element is at Index "<<peakIndexInMountainArray(arr);
    return 0;
}