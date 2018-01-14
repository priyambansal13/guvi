arr=[]
t1=[]
t2=[]
t3=[]
n=int(input('no of elements? \n'))
for x in range(0,n):
	num=int(input())
	arr.append(num)
for x in arr:
	if x not in t1:
		t1.append(x)
	else:
		t2.append(x)
for x in t1:
	if x not in t2:
		t3.append(x)
print (t3)
