def get_division(rating):
    if rating>= 1900:
        print("Division 1")
    elif rating >= 1600:
        print("Division 2")
    elif rating >= 1400:
        print("Division 3")
    else: 
        print("Division 4")

n = int(input())
 
for i in range(n):
    ele = int(input())
    get_division(ele)
