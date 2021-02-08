# Codeforce-Solutions-By-ZIlanJaman
It is the solutions of some codeforce problems
#71A. Way Too Long Word Python code
N=int(input())
list=[]
for i in range(1,N+1):
    a=input()
    if len(a)>10:
        b=a[0]
        c=a[len(a)-1]
        d=len(a)-2
        print(b+str(d)+c)
    else:
        print(a)    


 
