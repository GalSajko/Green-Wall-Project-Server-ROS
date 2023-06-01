import psycopg2
from datetime import datetime

conn = psycopg2.connect(
    host="localhost",
    database="plants",
    user="admin",
    password="admin",
    port= '5432')

cursor = conn.cursor()
cursor.execute('''SELECT * from plants''')
data = cursor.fetchall()
print(data)

date = datetime(2023,5,25,5,5,5)

sql = "update plants set date_time = %s"
cursor.execute(sql,(date,))
conn.commit()
conn.close()
