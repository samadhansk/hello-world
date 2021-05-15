

//   Median in a row-wise sorted Matrix 

/*
Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]

Output: 5

Explanation:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
 

Example 2:

Input:
R = 3, C = 1
M = [[1], [2], [3]]
Output: 2

Your Task:  
You don't need to read input or print anything. Your task is to complete the function median() which takes the integers R and C along with the 2D matrix as input parameters and returns the median of the matrix.

Expected Time Complexity: O(32 * R * log(C))
Expected Auxiliary Space: O(1)



*/ 


// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        int tempArr[r*c];
        int desired_index = (1+r*c)/2 -1;
       int index = 0   ; 
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                 tempArr[index++] = matrix[i][j];
            }
        }
        sort(tempArr, tempArr + r*c);
        return tempArr[desired_index]  ;        
    }
};

// { Driver Code Starts.

int main()
{

	#ifndef ONLINE_JUDGE
    //GETTING INPUT
    freopen("input.txt","r",stdin);
    //WRITING OUPUT
    freopen("output.txt","w",stdout);
    #endif


    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends

/*
input 

R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]


 output 

  5

*/