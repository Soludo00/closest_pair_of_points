# Closest Pair of Points for Divide and Conquer

## Overview

In this project I implemented the Closest Pair of Points problem, which is a classic problem in computational geometry.

The goal of the problem is to find the two points in a set that have the smallest distance between them.

This problem is often solved using a divide and conquer approach, where the set of points is divided into smaller subsets and the closest pair is found efficiently.


## How the Algorithm Works

The general idea of the closest pair algorithm is:

1. Divide the set of points into two halves.
2. Recursively find the closest pair in each half.
3. Check if a closer pair exists across the dividing line.
4. Return the smallest distance found.

In this implementation, a simpler comparison method is used where every pair of points is checked.


## Time Complexity

The basic comparison approach used in this program runs in O(n²) time because every point is compared with every other point.

The more advanced divide and conquer version can achieve O(n log n) time complexity.


## Implementation

The algorithm is implemented in C++.

Source file:

src/closest_pair.cpp

The program creates several example points and calculates the shortest distance between any two of them.


## What I Learned

While working on this algorithm I learned more about:

- how geometric problems can be solved with algorithms
- how distances between points are calculated
- how divide and conquer algorithms can improve efficiency
- how computational geometry problems are approached

