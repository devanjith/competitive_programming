seq = []
def farey( n ):
    a, b, c, d = 0, 1,  1 , n
    seq.append([a, b])
    while (c <= n):
        k = int((n + b)/d)
        a, b, c, d = c, d, k*c - a, k*d - b
        seq.append([a, b])

farey(int(raw_input()))
for i in range(len(seq)):
    if(seq[i][0]==1 and seq[i][1]==2):
        print seq[i-1][0]+seq[i-1][1]
        break
