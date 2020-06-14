### Nearly Lucky Number Elo:800 ###

list = list(map(int,input()))
counter = list.count(4) + list.count(7)

if counter == 7 or counter == 4:
	print("YES")
else:
	print("NO")
