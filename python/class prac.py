import random 


def min_max(arr):  
    mn = 10
    mx = -10 
    
    for i in arr: 
        mn =min(mn, arr) 
        mx =max(mx, arr)
 
    print("Max ", mx, '\n', "Min ", mn)

def count(arr): 
    cn = 0
    for i in arr: 
        if i < 0: 
            cn+=1 
    ck = arr.count('0')
    
    print("Count netg ", cn, '\n', "ck", ck)

def weirdy(arr): 
    k =0 
    l = int(input("Enter the number to compare")) 
    
    for i in arr: 
        if i > l: 
            k+=1 

    print("Count weirdy ", k)
      
    
    
def main(): 
    arr=[] 
    n = int(input("Size is ")) 
    
    for i in range(0, n-1): 
        arr.append(random.randint(-10, 10))
        print(arr[i], end=' ')
    min_max(arr) 
    count(arr)
    weirdy(arr)
 
main() 


   
    # for i in arr: 
        
        # if arr[i] > max: 
        #     max = arr[i] 
        # elif arr[i] < min: 
        #     min = arr[i]