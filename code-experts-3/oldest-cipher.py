from math import ceil;
from re import split;

def encode(msg, key):
    ar = [];
    for i in range(0, len(msg), key): ar.append(msg[i:i+key]);
    for i in range(key):
        for j in range(len(ar)):
            try: print (ar[j][i], end='');
            except: pass;
    print();

def decode(msg, key):
    ar, x = [], 0;
    width = int(ceil(len(msg)/key));
    for i in range(key):
        ar.append(msg[x:x+width]);
        x+=width;
    for i in range(width):
        for j in range(len(ar)):
            try: print(ar[j][i], end='');
            except: pass;
    print();
    

t=int(input());
for O_O in range(t):
    _ = split(r'(\s+)', input().strip());
    op, key, msg = _[0], int(_[2]), "".join(_[4:]);
    if op == 'e':
        encode(msg, key);
    else:
        decode(msg, key);
