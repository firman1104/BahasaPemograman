Penanganan eksepsi adalah cara untuk menangani kesalahan yang mungkin terjadi selama eksekusi program tanpa menghentikan program tersebut. Python menyediakan mekanisme penanganan eksepsi menggunakan blok try, except, else, dan finally.

Penjelasan Blok Penanganan Eksepsi
try: Blok kode yang ingin Anda uji untuk kesalahan.
except: Blok kode yang menangani kesalahan jika terjadi dalam blok try.
else: Blok kode yang dijalankan jika tidak ada kesalahan dalam blok try.
finally: Blok kode yang selalu dijalankan, baik terjadi kesalahan maupun tidak

Jika input tidak dapat diubah menjadi integer, blok except ValueError akan dijalankan.
Jika input adalah nol, blok except ZeroDivisionError akan dijalankan.
Jika tidak ada kesalahan, blok else akan dijalankan.
Blok finally akan selalu dijalankan terlepas dari apakah terjadi kesalahan atau tida
