import math
x = eval(input())
bal=100.0
yr=0
while bal<x:
	bal = (bal*101)/100
	yr+=1
print(yr)