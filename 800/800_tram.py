### Tram Elo:800 ###

stops = int(input())

max_val = 0
current_capacity = 0

for loop in range(stops):
	out_num, in_num = list(map(int, input().split()))
	current_capacity -= out_num
	current_capacity += in_num
	if current_capacity > max_val:
		max_val = current_capacity

print(max_val)
