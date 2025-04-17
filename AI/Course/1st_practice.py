# -*- coding: utf-8 -*-
"""
Created on Sat May 18 22:27:15 2024

@author: Muhammad Imran
"""

import numpy as np
import pandas as pd
#import matplotlib.pyplot as plt
from sklearn.impute import SimpleImputer
from sklearn.compose import ColumnTransformer
from sklearn.preprocessing import OneHotEncoder
from sklearn.preprocessing import LabelEncoder

dataset = pd.read_csv("data.csv")
#print(dataset)
#print(dataset.describe())

#imputer = SimpleImputer(missing_values= np.nan, strategy="mean")

#print(dataset[:, 1:3])

#datset_cols = dataset.columns[1:3]

#dataset[datset_cols] = imputer.fit_transform(dataset[datset_cols])

#print(dataset)

#ct = ColumnTransformer(transformers=[("enconder", OneHotEncoder(), [0])], remainder='passthrough')

#dataset = np.array(ct.fit_transform(dataset))

#print(dataset)

le = LabelEncoder()

y = dataset.iloc[:, 3]

y = le.fit_transform(y)
print(y)




