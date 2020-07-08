input1 = list(input())
input2 = list(input())

out = []

for a in range(input1.__len__()):
	out.append(abs(int(input1[a]) - int(input2[a])))

out_num = ""
for b in out:
	out_num += str(b)
print(out_num)

