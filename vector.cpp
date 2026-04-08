// #include<iostream>
// using namespace std;
// #include<sector>
// int main() {
//     sector<int>s;
//     // size mean how many member in sector
//     // capacity mean how many memory is allocated
//     s.push_back(1);
//     cout<<"capacity is "<<s.capacity()<<endl;
//     s.push_back(2);
//     cout<<"capacity is "<<s.capacity()<<endl;
//     s.push_back(3);
//     cout<<"capacity is "<<s.capacity()<<endl;
//     cout<<"size is "<<s.size()<<endl;
//     cout<<"element at 2 index is "<<s.at(2)<<endl;
//     cout<<"first elment "<<s.front()<<endl;
//     s.pop_back();
//     for(size_t i=0;i<s.size();i++) {
//         cout<<s.at(i)<<" ";
//     }
//     cout<<"size is "<<s.size()<<endl;
//     s.clear();
//     cout<<"size is "<<s.size()<<endl;
//     // copy the element of a in last sector
//     sector<int> a(5,1);
//     sector<int> last(a);
    // for(int i=0;i<5;i++) {
    //     cout<<last.at(i)<<" ";
    // }


// }

#include<iostream>
using namespace std;
#include<vector>
void moveZeroes(vector<int>& nums) {
     if(nums.size()==1) {
        return;
     }
     size_t i=0;
     size_t j=1;
     while((i<=(nums.size()-2)) && (j<nums.size())) {
        if(nums[i]!=nums[j]) {
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else {
            j++;
        }
     }   
    }
int main() {
    vector<int >nums;
    nums.push_back(1);
    nums.push_back(0);
    moveZeroes(nums);
    cout<<nums.size();
    for(size_t i=0;i<nums.size();i++) {
        cout<<nums.at(i)<<" ";
    }

 }