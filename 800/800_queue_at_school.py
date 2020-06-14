### Queue at school Elo:800 ###

len_q, t = list(map(int,input().split()))

q = list(input())

for a in range(t):
	current = 0
	while current < len_q-1:
		if q[current] == "B" and q[current+1] == "G":
			q[current], q[current+1] = q[current + 1], q[current]
			current += 2
		else:
			current += 1

print("".join(q))
