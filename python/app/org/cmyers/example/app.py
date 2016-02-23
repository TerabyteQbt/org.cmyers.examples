
import sys
from org.cmyers.example import lib

class App(object):
    def __init__(self):
        self.lib = lib.Lib()

    def developers(self):
        return self.lib.developers()

def main():
    print "Developers: " + ", ".join(App().developers())

if __name__ == '__main__':
    sys.exit(main())

