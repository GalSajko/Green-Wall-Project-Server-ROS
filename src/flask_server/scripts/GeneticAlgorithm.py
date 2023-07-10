import numpy as np
import matplotlib.pyplot as plt 
import random
import sys
sys.path.append('..')
import config
from matplotlib.animation import FuncAnimation

def generatePopulation(sol, num):
    """Function generates the initial population from by shuffling the original sequence.

    Args:
        sol (list): Original sequence of point indexes
        num (int): Size of population.

    Returns:
        list: Initial population.
    """
    pop =[] 
    sez = []
    sez = sol.copy()
    for i in range(num):
        random.shuffle(sez)
        pop.append(sez.copy())
    return pop
    
def getDistance(sol,x,y):
    """Function calculates the distance between points for a given sequence.

    Args:
        sol (list): Sequence of points.
        x (list): x coordinates for the original list of points.
        y (list): y coordinates for the original list of points.

    Returns:
        float: distance between points for a given sequence.
    """
    d = 0
    for i in range(len(sol)-1):
        d+=np.sqrt((x[sol[i]]-x[sol[i+1]])**2+(y[sol[i]]-y[sol[i+1]])**2)
    d+=(x[sol[-1]]+x[sol[0]])**2+(y[sol[-1]]-y[sol[0]])**2
    return d

def generateFitness(population,x ,y):
    """Function calculates fitness for every element of the population.

    Args:
        population (list): Current population.
        x (list): x coordinates for the original list of points.
        y (list): y coordinates for the original list of points.

    Returns:
        list: Value that describes the rank of the element.
    """
    fitness = []
    for i in population:
        fit = 1.0/getDistance(i,x,y)
        fitness.append(fit)
    return fitness

def normalizeFitness(fitness):
    """Function makes sure that the fitness value is mapped between 0 and 1.

    Args:
        fitness (list): Value that describes the rank of the element.

    Returns:
        list: listo of normalized fitnesses.
    """
    sum = 0
    for i in range(len(fitness)):
        sum+=fitness[i]
    for i in range(len(fitness)):
        fitness[i] = fitness[i]/sum
    return fitness

def selection(population,fitness):
    """Function selects two elements that will be used to create a new element for the next generation.

    Args:
        population (list): Current population
        fitness (list): Value that describes the rank of the element.

    Returns:
        list: Two lists that will used in the crossover 
    """
    selected = []
    numPer = int((len(population)/100)*5)
    for j in range(2):
        maxValue = 0
        maxInd = 0
        for i in range(numPer):
            val = random.randint(0,len(fitness)-1)
            if fitness[val] > maxValue:
                maxValue = fitness[val]
                maxInd = val
        selected.append(population[maxInd])
    return selected

def crossover(population, fitness, listSize):
    """Function that breeds two selected elements to create a new element for the next generation.

    Args:
        population (list): Current population
        fitness (list): Value that describes the rank of the element.
        listSize (int): size of element.

    Returns:
        list: Element for the new generation
    """
    cross = selection(population,fitness)
    parent1 = cross[0]
    parent2 = cross[1]
    child = [-1 for i in range(listSize)]
    min = random.randint(1,int(len(parent1)/2)-1)
    max = random.randint(int(len(parent1)/2),len(parent2)-2)
    index = max
    safety = 0
    for i in range(min,max):
        child[i]=parent1[i]
    while safety < listSize:
        if max == len(parent2):
            max = 0
        if index == len(parent2):
            index = 0
        if index == min:
            break
        if parent2[max] not in child:
            child[index]= parent2[max]
            index+=1
        max+=1
        safety+=1
    return mutate(child)

def mutate(child):
    """Has a chance to "mutate" (randomly swap 2 elements) the element.

    Args:
        child (list): Element to be added to the next generation.

    Returns:
        list: Mutated element for the next generation
    """
    if random.randint(0,100) < 2:
        min = random.randint(1,int(len(child)/2))
        max = random.randint(int(len(child)/2)-1,len(child)-2)
        child[min:max]= reversed(child[min:max])
    return child 
    
def getBestInd(fitness):
    """Finds the best element from the population after generating the selected amount of generations.

    Args:
        fitness (list): Value that describes the rank of the element.

    Returns:
        int: index of the best element.
    """
    bestFitness = 0
    bestInd = 0
    for i in range(len(fitness)):
        if fitness[i]>bestFitness:
            bestFitness = fitness[i]
            bestInd = i
    return bestInd

def nextGen(population, popSize, fitness,listSize):
    """Creates new population by breeding best element from current population.

    Args:
        population (list): Current population.
        popSize (int): Size of the population.
        fitness (list): Value that describes the rank of the element.
        listSize (int): size of element.

    Returns:
        list: newly created population.
    """
    newPop = []
    for i in range(popSize):
        newPop.append(crossover(population,fitness,listSize))
    return newPop

def geneticAlgorithm(pointList,x,y,listSize, popSize, generations):
    """_summary_

    Args:
        pointList (list): list of indexes for points.
        x (list): x coordinates for the original list of points.
        y (list): y coordinates for the original list of points.
        listSize (int): size of pointList.
        popSize (int): size of population.
        generations (int): number of generations.

    Returns:
        list: best sequence of indexes.
    """
    population = generatePopulation(pointList,popSize)
    fitness = generateFitness(population,x,y)
    fitness = normalizeFitness(fitness)
    for i in range(generations):
        population = nextGen(population, popSize, fitness, listSize)
        fitness = generateFitness(population,x,y)
        fitness = normalizeFitness(fitness)
    routeInd = getBestInd(fitness)
    return population[routeInd]

