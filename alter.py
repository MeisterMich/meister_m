str_in=input("Enter the string: ")
numbers = []

for i in range(len(str_in)):
    if(str_in[i].isdigit()==True):numbers.append(int(str_in[i]))
print(numbers)