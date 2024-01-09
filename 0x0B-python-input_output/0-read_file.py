#!/usr/bin/python3

def read_file(filename=""):
    with open(filename, w, encoding = "UTF8") as f:
        read_file = f.read()
