import pandas as pd 
import numpy as np 
import matplotlib.pyplot as plt

dataset = pd.read_csv("data2.csv")
#print(dataset)

x = dataset.iloc[:,0:-1]
y = dataset.iloc[:,1]

from sklearn.model_selection import train_test_split

xTrain, xTest, yTrain, yTest = train_test_split(x,y,test_size=0.3,random_state=0)

#print(len(xTrain))

from sklearn.linear_model import LinearRegression

lr = LinearRegression()
lr.fit(xTrain,yTrain)

yPred = lr.predict(xTest)

#print(yPred)

df = pd.DataFrame()
df["Actual values"] = yTest
df["Predicted values"] = yPred

print(xTest)

print(df)



