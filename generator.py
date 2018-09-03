#!/usr/bin/env python
# -*- coding: utf-8 -*-
import random
import string
import re

of = open("output.txt", 'w')
s = ''
for i in range(100):
    a = []
    f = open('data/' + s + '.txt', 'r')
    s3 = f.read()
    #print(s3)
    b = s3.split()
    for s1 in b:
        a.append(s1)
        print(s1)
    it = random.randint(0, len(a)-1)
    of.write(a[it]+' ')
    s = a[it]
