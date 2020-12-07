if __name__ == "__main__":

	num = int(input("Enter list size : "))
	numList = []
	for i in range(0, num):
		numList.append(input("Enter list element " + str(i) + " : "))
	
	odd = []
	even = []

	for x in numList:
		if int(x)%2==0:
			even.append(x)
		else:
			odd.append(x)

	evenodd = even + odd #even elements in the list first
	#prints odd first
	i = 0
	count = 0
	flag = 0
	while count!=num:
		if i==num:
			i=0
			flag=1
		if(int(evenodd[i])%2!=0):
			print(evenodd[i])
			count+=1
		elif flag==1:
			print(evenodd[i])
			count+=1
		i+=1