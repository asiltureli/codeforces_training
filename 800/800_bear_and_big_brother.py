### Bear and Big Brother Elo:800 ###

a, b = list(map(int,input().split()))

year = 0

while 1:

	a*=3
	b*=2
	year+=1
	if a>b:
		break
print(year) 
