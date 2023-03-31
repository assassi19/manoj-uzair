#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i=m-1 , j=n-1 ;
        while(i>=0 && j>=0 ){
            if(nums1[i]>=nums2[j]){
                nums1[i+j+1]=nums1[i] ;
                i-- ;
                }else{
                    nums1[i+j+1]=nums2[j];
                    j-- ;
                }
        }
        while(j>=0){
                    nums1[j]=nums2[j];
                    j-- ;
                }      
    }
//simply i've written algo to merge 2 sorted arrays/vectors!
int main(){
   vector <int> human, animal;
   human.push_back(2);
   human.push_back(4);
   human.push_back(5);
   human.push_back(7);
   human.push_back(9);

   animal.push_back(2);
   animal.push_back(3);
   animal.push_back(15);

   merge(human,5,animal,3);
   for(int i=0; i< 8; i++){
      cout<<human[i]<<" ";
   }cout<<endl;
}
