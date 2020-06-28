from sys import stdin,stdout
tc = int(stdin.readline())
for i in range(tc):
	n = int(stdin.readline())
	c0=0
	c1=0
	for i in range(n):
		g,a,b = map(int,stdin.readline().split())
		c0 += g*(b/(a+b))
		c1 += g*(a/(a+b))
	stdout.write(str(c0)+' '+str(c1)+'\n')