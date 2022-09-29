import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler,PolynomialFeatures
file_name='kc_house_data.csv'
df=pd.read_csv(file_name)
df.drop(["id", "Unnamed: 0"], axis=1, inplace = True)
df.describe()
df['floors'].value_counts()
df['floors'].value_counts().to_frame()
#print(dd)
dd =sns.boxplot(x="waterfront", y="price", data=df)

print(dd)




