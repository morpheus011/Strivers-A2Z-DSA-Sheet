// URL
// https://practice.geeksforgeeks.org/problems/data-type-1666706751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=data-type

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if(str=="Integer") return sizeof(int);
        else if(str=="Float") return sizeof(float);
        else if(str=="Character") return sizeof(char);
        else if(str=="Double") return sizeof(double);
        else if(str=="Long") return sizeof(long);
        else return -1;
        
    }
};