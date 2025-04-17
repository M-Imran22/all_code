import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import missingno  as msno

dataset = pd.read_csv("Date_Datasets.csv")
#print(dataset)

#print(dataset.head())

#print(dataset.isnull().values.any()) gives me "false". there's no missing values

#print(dataset.isnull().sum())

#print(msno.matrix(dataset)) visualize missing values

no_rows, no_cols = dataset.shape

print(f"Number of rows: {no_rows}")
print(f"Number of columns: {no_cols}")