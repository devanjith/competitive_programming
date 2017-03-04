#!/usr/bin/env python2
MOD = 1000000000;
def last_n_digits(n):
    v1, v2, v3 = 1, 1, 0;
    for rec in bin(n)[3:]:
        calc = (v2*v2) % MOD;
        v1, v2, v3 = (v1*v1+calc) % MOD, ((v1+v3)*v2) % MOD, (calc+v3*v3) % MOD;
        if rec == '1': v1, v2, v3 = (v1+v2) % MOD, v1, v2;
    return v2;
t=int(raw_input());
for i in range(t): print last_n_digits(int(raw_input()));
