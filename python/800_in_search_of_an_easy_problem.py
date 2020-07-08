### In Search of an easy Problem ###

in_num = int(input())
nums = list(map(int,input().split()))

flag = 1

for a in nums:
	if a == 1:
		flag = 0
		break

if flag:
	print("EASY")
else:
	print("HARD")
