raw_n_k = input()
n, k = raw_n_k.split()
k = int(k)
n= int(n)
scores = input()
score_list = list(map(int, scores.split()))
counter = 0
for loop in score_list:
	if loop >= score_list[k-1] and loop > 0:
		counter+=1

print(counter)



