
import sys

class Lib(object):
    def __init__(self):
        self._developers = [
                'cmyers',
                'amling',
                ]

    def developers(self):
        return self._developers


def main():
    print "Developers: " + ", ".join(Lib().developers())

if __name__ == '__main__':
    sys.exit(main())

