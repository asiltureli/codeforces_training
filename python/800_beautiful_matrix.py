### Beautiful Matrix Elo:800 ###
matrix = []
for a in range(5):
	matrix.append(list(map(int,input().split())))
for b in range(5):
	for c in range(5):
		if matrix[b][c] == 1:
			m = b
			n = c
			break
result = abs(m-2) + abs(n-2)
print(result)


