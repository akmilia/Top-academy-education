# n=10

# while n!=0:
#     print(n)
#     n-=1 
    
# for i in range(0, 10, +1): 
#     print(i)

arr = [1,2,3,4,5,6,7,8,9,10]

for i in arr:  
    for j in arr: 
        print(j, "*", i, " = ", i*j,  end='\t') 
    print('\n')
    
    