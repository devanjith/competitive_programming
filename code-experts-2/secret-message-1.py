import re
t=int(input())
for i in range(t):
    inputs=input().split()
    position=int(inputs[0])
    length=int(inputs[1])
    riddle=str(inputs[2])
    key=str(riddle[position-1:position+length-1])
    while(key in riddle):
        riddle = re.sub(key, '', riddle)
    print(key+riddle)
