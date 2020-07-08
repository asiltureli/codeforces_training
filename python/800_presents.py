### Presents Elo:800 ###

len = int(input())
num_list = list(map(int,input().split()))

num_list = sorted(range(num_list.__len__()),key=num_list.__getitem__)

num_list =[x+1 for x in num_list]
print(" ".join(map(str,num_list))) 
