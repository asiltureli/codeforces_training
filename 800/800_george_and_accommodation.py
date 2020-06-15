### George and Accomodation Elo:800 ###

n = int(input())
counter = 0
for a in range(n):
	people, capac = list(map(int,input().split()))
	if capac - people >1:
		counter +=1

print(counter)
