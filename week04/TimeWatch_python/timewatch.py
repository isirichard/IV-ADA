import abc
import time

""" 
    IAlgorithm interface
"""


class IAlgorithm(abc.ABC):
    @abc.abstractmethod
    def run(self):
        pass


class AlgorithmOne(IAlgorithm):
    def __init__(self):
        pass

    def run(self):
        for a in range(1, 100000):
            pass


class TimeWatch:
    def __init__(self):
        pass

    def execute(self):
        algone = AlgorithmOne()
        start_time = time.time()
        algone.run()
        stop_time = time.time()
        return stop_time - start_time


def main():
    tw = TimeWatch()
    print("Execution time was {:6.5f} seconds".format(tw.execute()))


if __name__ == "__main__":
    main()
