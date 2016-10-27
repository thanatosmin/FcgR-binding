import numpy as np
from math import *

def nchoosek(n,k):
    return factorial(n)/(factorial(k)*factorial(n-k))

def loadData():
    mfi = [[113,5,7,8,38,6,8,10], \
    [441,427,784,172,318,552,900,248], \
    [440,578,997,176,404,392,894,124], \
    [442,407,905,185,322,515,957,242], \
    [388,428,618,139,530,431,810,172], \
    [14,8,9,9,18,9,12,12], \
    [130,177,274,58,266,604,1016,281], \
    [50,23,57,13,149,139,381,48], \
    [184,193,408,87,523,621,1297,281], \
    [44,21,29,17,265,151,343,72], \
    [38,4,4,5,53,5,5,10], \
    [327,308,539,113,660,585,1298,377], \
    [277,203,174,36,533,394,742,156], \
    [307,334,305,135,421,674,1173,405], \
    [148,54,6,20,630,517,1005,145], \
    [7,6,7,4,9,7,9,10], \
    [80,200,262,30,139,737,1108,230], \
    [17,27,40,8,63,111,260,32], \
    [124,231,349,62,442,942,746,244], \
    [33,44,100,21,183,331,605,68], \
    [7,6,8,6,7,7,8,11], \
    [262,676,1015,269,709,1333,1935,698], \
    [14,31,31,14,23,26,68,19], \
    [328,528,790,267,788,1668,2628,891], \
    [9,8,16,10,17,21,46,20], \
    [49,8,14,7,49,8,9,8], \
    [295,596,1016,334,488,813,1330,383], \
    [105,186,293,65,177,362,573,114], \
    [np.nan,623,1055,365,924,1317,1861,676], \
    [122,136,262,91,313,558,1026,239]]

    mfiAdj = []
    noise = []
    for j in range(len(mfi)):
        if j%5 != 0:
            mfiAdj.append(mfi[j])
        else:
            for k in range(4):
                noise.append(mfi[j])
    mfiAdj = np.array(mfiAdj)-np.array(noise)

    temp = np.transpose(mfiAdj)
    means = [np.nanmean(np.concatenate((temp[j],temp[j+4]))) for j in range(4)]
    means2 = np.concatenate((means,means))
    temp = means2
    for j in range(23):
        temp = np.concatenate((temp,means2))
    noise = np.reshape(temp,(24,8))
    mfiAdjMean = mfiAdj/noise

    ## Define concentrations of TNP-4-BSA and TNP-26-BSA
    ## These are put into the numpy array "tnpbsa"
    tnpbsa4 = 1/67122*1e-3*5
    tnpbsa26 = 1/70928*1e-3*5
    tnpbsa = np.array([tnpbsa4,tnpbsa26])

    ## Define the matrix of Ka values from Bruhns
    ## For accuracy, the Python implementation of this code will use
    ##  Ka values as opposed to Kd, as these were the values which Bruhns
    ##  gives in his experiments.

    kaBruhns = [[6.50e7,np.nan,6.10e7,3.40e7], \
    [4.00e6,8.00e4,1.00e6,2.00e5], \
    [4.00e6,4.50e5,1.00e6,2.00e5], \
    [2.00e5,2.50e4,1.70e5,2.00e5], \
    [1.50e6,2.50e4,5.00e6,2.00e5], \
    [1.50e6,8.00e4,5.00e6,2.00e5]]

    kaBruhns = np.array(kaBruhns)

    ## Create a matrix which contains the mean value for each condition
    ##  (after mean adjustment) of the size 24x2

    meanPerCond = []
    for j in range(24):
        temp = []
        for k in range(2):
            temp2 = []
            for l in range(4):
                temp2.append(mfiAdjMean[j,k*4+l])
            temp.append(np.nanmean(np.array(temp2)))
        meanPerCond.append(temp)
    meanPerCond = np.array(meanPerCond)

    biCoefMat = []
    for j in range(30):
        temp = []
        for k in range(j+1):
            temp.append(nchoosek(j+1,k+1))
        while len(temp) < 30:
            temp.append(0)
        biCoefMat.append(temp)
    biCoefMat = np.array(biCoefMat)

    return {'mfiAdjMean':mfiAdjMean, 'tnpbsa':tnpbsa, 'kaBruhns':kaBruhns, \
            'meanPerCond':meanPerCond, 'biCoefMat':biCoefMat}
