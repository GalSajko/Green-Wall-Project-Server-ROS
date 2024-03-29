"""Resets dates in database. ONLY USE FOR TESTING
"""
import psycopg2
from datetime import datetime

conn = psycopg2.connect(
    host="localhost",
    database="plants",
    user="spiderpi",
    password="379579",
    port= '5432')

cursor = conn.cursor()
cursor.execute('''SELECT * from plants''')
data = cursor.fetchall()
print(data)

date = datetime(2023,8,30,5,5,5)
date2 = datetime(2023,8,30,5,5,5)
sql = "update plants set date_time = %s where id > 70"
sql2 = "update plants set date_time = %s where id <= 70"
cursor.execute(sql,(date,))
cursor.execute(sql2,(date2,))
conn.commit()
conn.close()
