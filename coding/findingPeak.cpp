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
    cout<<"enter number of elements"<<endl;
    cin>>num;

    vector<int> arr;
    int elem;
    for(int i = 0; i < num; i++) {
        cout<<"Enter element"<<endl;
        cin>>elem;
        arr.push_back(elem);
    }

    cout<<"The peak element is at Index "<<peakIndexInMountainArray(arr);
    return 0;
}