///Subset Sum Problem
///https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&problemStatus=solved&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=1&query=category[]Dynamic%20ProgrammingproblemStatussolveddifficulty[]0difficulty[]1difficulty[]2page1category[]Dynamic%20Programming


Example 1:

Input:
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 9
Output: 1 
Explanation: Here there exists a subset with
sum = 9, 4+3+2 = 9.
Example 2:

Input:
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 30
Output: 0 
Explanation: There is no subset with sum 30.


Code:

int t[1001][1001];
class Solution{   
public:
    bool solve(int N,int arr[],int sum){
    // code here 
        if(sum==0) return 1;    ///we can make sum=0 by not taking any number (possibility)
        if(N==0) return 0;     /// if there are no numbers in an array then no possibility is there.
        if(t[N][sum]!=-1){
            return t[N][sum];
        }
        if(arr[N-1]<=sum){
            return t[N][sum]=solve(N-1,arr,sum-arr[N-1])||solve(N-1,arr,sum);
        }
        else{
            return t[N][sum]=solve(N-1,arr,sum);
                                
        }
    }

    bool isSubsetSum(int N, int arr[], int sum){
        memset(t,-1,sizeof(t));
        return solve(N,arr,sum);
    }
};

