### Magnets Elo:800 ###

in_num = int(input())

grp_cnt = 1
prev_magnet = int(input())
for a in range(in_num-1):
	curr_magnet = int(input())
	if curr_magnet != prev_magnet:
		grp_cnt +=1
	prev_magnet = curr_magnet

print(grp_cnt)
