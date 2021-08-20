C. Membalik yang Terbalik

Time limit	1 s
Memory limit	64 MB
Deskripsi

Bebek-bebek Pak Dengklek ingin menguji kecerdasan Anda. Anda akan
diminta untuk membalik representasi desimal dari beberapa bilangan bulat
positif, dengan mengabaikan leading zero. Sebagai contoh, 12340 jika
dibalik menjadi 04321; lalu karena leading zero diabaikan, maka akan
dianggap menjadi 4321.

Bebek-bebek Pak Dengklek akan memberikan Anda dua buah bilangan bulat
positif A dan B. Anda diminta untuk membalik representasi desimal kedua
bilangan tersebut. Sebut saja hasil pembalikan representasi desimal
keduanya sebagai A' dan B'. Kemudian, Anda diminta untuk menjumlahkan A'
dan B'. Sebut saja hasil penjumlahannya sebagai C. Terakhir, Anda
diminta untuk mencetak hasil pembalikan representasi desimal dari C.

Sebagai contoh, A adalah 1010 dan B adalah 653. Maka, A' dan B' secara
berurut adalah 101 dan 356. Hasil penjumlahan A' dan B' adalah C, yaitu
101 + 356 = 457. Bilangan yang dicetak adalah pembalikan dari C, yaitu
754.

Untuk mempermudah pekerjaan Anda, Anda diberikan sebuah pseudocode
fungsi pembalik representasi desimal reverse() sebagai berikut:

  reverse(x) {
      temp = x
      ret  = 0

      while (temp > 0) {
          ret  = (ret * 10) + (temp mod 10)
          temp = temp div 10
      }

      return ret
  }

Dengan a mod b adalah operasi a modulus b (sisa pembagian dari a dibagi
b) dan a div b adalah operasi pembagian a dibagi dengan b dengan
pembulatan ke bawah.
Format Masukan

Sebuah baris berisi dua buah bilangan bulat A dan B, dipisahkan dengan
sebuah spasi.
Format Keluaran

Sebuah baris berisi keluaran sesuai permintaan soal.
Contoh Masukan

1010 653

Contoh Keluaran

754

Batasan
1 ≤ A, B ≤ 1.000.000

Link: https://tlx.toki.id/courses/basic/chapters/10/problems/C
