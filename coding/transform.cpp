#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// int main() {
//    string my_str = "Hello WORLD";

//    cout << "Main string: " << my_str << endl;
//    transform(my_str.begin(), my_str.end(), my_str.begin()+3, ::tolower);
//    vector<int> arr = {1,2,3,4};
//    transform(arr.begin(), arr.end(), arr.begin(), [](int x) {return x+1;});
//    for(int a : arr)
//    	cout<<a<<endl;

//    cout << "Converted String: " << my_str;
// }

int main() 
{ 
  int arr1[] = {1, 2, 3}; 
  int arr2[] = {4, 5, 7}; 
  int n = sizeof(arr1)/sizeof(arr1[0]); 
  int res[n]; 
  
  // Single line code to add arr1[] and arr2[] and 
  // store result in res[] 
  transform(arr1, arr1+n, arr2+3, res, minus<int>()); 
  
  for (int i=0; i<n; i++) 
    cout << res[i] << " "; 
} 