'''Algo tester'''

from os import *
import time
import readfiles as rf

def antAlgo():

    system('g++ TSPConstructor.cpp -o TSPConstructor')
    system('.\TSPConstructor')
    system('g++ antal.cpp -o Antal')
    system('g++ antalElitist.cpp -o AntalElitist')
    system('g++ antalRank.cpp -o AntalRank')

    #t1 = time()
    
    system('.\Antal')
    system('.\AntalElitist')
    system('.\AntalRank')

    rf.cityReadSACO()
    rf.cityReadElitist()
    rf.cityReadRank()


if __name__ =='__main__':
    antAlgo()
    
    

    

