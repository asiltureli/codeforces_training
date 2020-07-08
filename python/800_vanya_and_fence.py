### Vanya and Fence Elo:800 ###

friend_num, fence = list(map(int,input().split()))
friends = list(map(int,input().split()))
width = 0
for a in friends:
	if a > fence:
		width += 2
	else:
		width += 1

print(width)
