## Problem Team, 800 Elo ##

in_num = input()
in_num = int(in_num)
submit_score = 0
for a in range(0,in_num):
	input_bool = input()	
	temp = list(map(int,input_bool.split()))
	counter = 0
	for i in temp:
		counter+= i

	if counter >1:
		submit_score+=1

print(submit_score)
