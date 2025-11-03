def rec_fact(n):
   if n==1:return 1
   else:return(n*rec_fact(n-1))
n=int(input("Enter a number:"))
if n>=1:
  print("Factorial of a number:",rec_fact(n))
