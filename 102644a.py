from sys import stdin,stdout
n,p = stdin.readline().split();
# print(n,p)
n = int(n)
p = float(p)
# print(n,p)

phappy = 1.0
while(n>0):
	if(n%2==1):
		phappy = (phappy*(1-p))+ ((1-phappy)*p)
	p = (p*(1-p)) +((1-p)*p)
	n /=2
print(phappy)
