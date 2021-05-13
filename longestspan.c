#include<bits/stdc++.h> 
using namespace std; 

int lCS(bool a1[], bool a2[], int n) 
{ 
    int maxLen = 0; 
    for (int i=0; i<n; i++) 
    { 
       int sum1 = 0, sum2 = 0; 
        for (int j=i; j<n; j++) 
        { 
           sum1 += a1[j]; 
           sum2 += a2[j]; 

           if (sum1 == sum2) 
           { 
             int len = j-i+1; 
             if (len > maxLen) 
                maxLen = len; 
           } 
       } 
    } 
    return maxLen; 
} 

int main() 
{ 
    bool  a1[] = {0, 1, 0, 1, 1, 1, 1}; 
    bool  a2[] = {1, 1, 1, 1, 1, 0, 1}; 
    int n = sizeof(a1)/sizeof(a1[0]); 
    cout << "Length of the longest common span with same "
            "sum is "<< lCS(a1, a2, n); 
    return 0; 
}