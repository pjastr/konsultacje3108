import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


dane = pd.read_csv("gastro52.csv", sep=";", header=None).T
dane2 =dane.iloc[1:,].copy()
dane2.columns = dane.iloc[0,]
dane2["Rok"] = pd.Series(dane2["Rok"], dtype=int)
dane2["Wartosc"] = pd.Series(dane2["Wartosc"], dtype=int)