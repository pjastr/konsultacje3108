import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


data = pd.read_csv("sport73.csv", sep=";", header=None).T
data.columns = ["Dyscyplina", "Rok", "Wartość"]
data["Rok"] = pd.Series(data["Rok"], dtype=int)
data["Wartość"] = pd.Series(data["Wartość"], dtype=int)
print(data.dtypes)