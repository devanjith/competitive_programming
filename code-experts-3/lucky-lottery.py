_ = map(int, raw_input().split())
n, t, tc = _[0], _[1], 0;
perm_string = '1'*t + '0'*(n-t);
for i in range(int(perm_string, 2)+1):
    bi = bin(i)[2:].zfill(n);
    if bi.count('1') == t:
        #print bi;
        c = 0;
        c += 9**(bi[1:].count('0'));
        if bi[0] == '0': c*=8;
        tc += c;

print tc;
