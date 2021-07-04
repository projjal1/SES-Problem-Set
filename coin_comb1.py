# cook your dish here

import sys
sys.setrecursionlimit(10000)

def countWays(target,numbers,memo={}):
    if target<0:
        return 0
    if target==0:
        return 1 
    if target in memo:
        return memo[target]
        
    count=0 
    
    for num in numbers:
        rem=target-num
        flag=countWays(rem,numbers,memo)
        if flag!=0:
            count+=flag
    
    memo[target]=count 
    return memo[target]
    
n,s=[int(x) for x in input().split()]
nos=[int(x) for x in input().split()]

if n==1 and s%nos[0]==0:
    print(1)
else:
    print(countWays(s,nos))
    