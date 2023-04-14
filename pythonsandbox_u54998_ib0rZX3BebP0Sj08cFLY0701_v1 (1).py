class Kullanici:
def __init__(self, kullanici_adi, sifre):
        self.kullanici_adi = kullanici_adi
        self.sifre = sifre
def giris_yap(self):
        print("Sisteme giris yapildi.")
kullanici_listesi = []
# Sisteme üye olma işlemi
def sisteme_uye_ol():
    print("Sisteme Uye Ol secildi.")
  
    kullanici_adi = input("Kullanici adinizi belirleyiniz: ")
    sifre = input("Sifrenizi belirleyiniz: ")
    yeni_kullanici = Kullanici (kullanici_adi, sifre)
    kullanici_listesi.append(yeni_kullanici)
    print("Uyelik olusturuldu.")

# Sisteme giriş yapma işlemi
def giris_yap():
    print("Sisteme Giris Yap secildi.")

    kullanici_adi = input("Kullanici adi: ")
    sifre = input("Sifre: ")
    for kullanicilar in kullanici_listesi:
        if kullanicilar.kullanici_adi == kullanici_adi and kullanicilar.sifre == sifre:
            print(" kullanici basariyla giris yapti!")
            return
    print("Hatali kullanici adi veya sifre.")
# Şifremi unuttum işlemi
def sifremi_unuttum():
    print("Sifremi Unuttum secildi.")
  

# Ana menü
def ana_menu():
    while True:
        print("********** MENU **********")
        print("1. Sisteme Uye Ol")
        print("2. Sisteme Giris Yap")
        print("3. Sifremi Unuttum")
        print("0. Cikis")
        secim = input("Bir islem secin (1-3) veya cikmak icin 0'a basin: ")
        if secim == "1":
            sisteme_uye_ol()
        elif secim == "2":
            sisteme_giris_yap()
        elif secim == "3":
            sifremi_unuttum()
        elif secim == "0":
            print("Cikiyor...")
            break
        else:
            print("Gecersiz secim. Tekrar deneyin.")

# Ana menüyü çağırma
ana_menu() 