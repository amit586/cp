import math
t = eval(input())
while t:
	t=t-1
	n = eval(input())
	o = math.pi/n
	ang=o
	ans=1
	while math.cos(ang)>=0:
		ans+=2*math.cos(ang)
		ang+=o
	print(ans)