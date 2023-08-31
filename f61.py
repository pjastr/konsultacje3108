import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

dane = pd.read_csv("wyksz61.csv")
podst = dane[dane["Wykształcenie"] == "podstawowe"]
sred = dane[dane["Wykształcenie"] == "średnie"]
plt.subplot(1,2,1)
plt.barh(sred["Wiek"], sred["Liczebność"])
plt.xticks([0, 500000, 1000000, 1500000], ["0", "500000", "1000000", "1500000"], rotation =45)
plt.subplot(1,2,2)
plt.barh(podst["Wiek"], podst["Liczebność"])
plt.xticks([0, 1000000, 2000000, 3000000], ["0", "1000000", "2000000", "3000000"], rotation =45)
plt.tight_layout()
plt.show()