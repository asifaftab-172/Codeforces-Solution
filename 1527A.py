t=int(input())

for i in range(t):
    
    n=int(input())
    
    while n&(n-1):
          n=n&(n-1)
    
    print(n-1)
