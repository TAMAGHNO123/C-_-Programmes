#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &height)
{ // passing the reference(location)
     int left = 0, right = height.size() - 1;
     int left_max = 0, right_max = 0; // int left_max = 0, right_max = 0;: These variables store the maximum height encountered so far from the left and right sides, respectively."int water_trapped = 0;" ->This variable accumulates the total amount of water trapped.
     int water_trapped = 0;
     while (left <= right)
     {
          if (height[left] <= height[right])
          {
               if (height[left] >= left_max)
               {
                    left_max = height[left];
               }
               else
               {
                    water_trapped += left_max - height[left];
               }
               left++;
          }
          else
          {
               if (height[right] >= right_max)
               {
                    right_max = height[right];
               }
               else
               {
                    water_trapped += right_max - height[right];
               }
               right--;
          }
     }
     return water_trapped;
}

int main()
{
     vector<int> height = {0, 1, 0, 2, 1, 0, 1, 2, 1, 2, 1};
     cout << "Water trapped : " << trap(height) << " Units." << endl;
}

/*The & symbol in the function parameter list indicates that the parameter is passed by reference rather than by value. In the context of the function int trap(vector<int>& height), the parameter height is a reference to the vector of integers passed to the function.

Think of a vector as a file on your computer:

Pass by Reference: It’s like giving someone the file path (location) of the file. They can open, read, and modify the original file directly using this path.

Pass by Value: It’s like making a copy of the file and giving someone this copy. They can open, read, and modify the copy, but the original file remains unchanged.
*/