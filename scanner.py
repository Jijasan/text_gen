#!/usr/bin/env python
# -*- coding: utf-8 -*-
import string
import re

f = open('input.txt')
a = []
s2 = u""
for s in f:
    s = s.lower()
    print(s)
    b = s.split()
    for s1 in b:
        #print(s1)
        reg = re.compile('[^a-zA-Zа-яА-Я]')
        s1 = reg.sub('', s1)
        file = 'data/' + s2 + '.txt'
        of = open(file, 'a')
        of.write(s1 + '\n')
        s2 = s1.format('cp1251')
