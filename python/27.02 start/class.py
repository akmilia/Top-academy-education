import random
def print_all_negative(mize, size): 
    for i in range(mize, size): 
        if i<0:
            print(i)   
        
def while_else():
        n = int(input())
        m = int(input())

        ch = input("Operator ")
        if ch==1 :
            print(n +m) 
        elif ch==2 :
            print(n - m) 
        elif ch==3 :
            print(pow(m, n)) 
       
def main(): 
    
    arr = [] 
    si = 10 
    
    for i in range(0, si-1): 
        arr.append(random.randint(-100, 100))
        print(arr[i], end=' ')
        
    print_all_negative(-5, 11) 
    while_else()  
    
main()
