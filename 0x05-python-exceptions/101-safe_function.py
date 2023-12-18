#!/usr/bin/python3
import sys


def safe_function(fct, *args):
    try:
        var = fct(*args)
    except BaseException as e:
        var = None
        print("Exception: {}".format(e), file=sys.stderr)
    finally:
        return var
