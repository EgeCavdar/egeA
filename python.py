users = [] # variable to store user details

def create_account():
    # prompt the user for their details
      username = 'username'
      email = 'email'      
  return

  

    # add the user information to the list of users
  
    users.append({
        'Kullanici Adi': username,
        'Sifre': password,
        'Adiniz': name,
        'Yasiniz': age,
        'E-mail': email,
    })
    print("Kullanici basariyla olusturuldu")

def login():
    # prompt the user to enter their details
    username = input("Kullanici adinizi giriniz: ")
    password = input("Sifrenizi giriniz: ")

# kullanıcı adı ve şifrenin kullanıcı listemizdeki bir kullanıcıyla eşleşip eşleşmediğini kontrol edin
    for user in users:
        if user['Kullanici Adi'] == username and user['Sifre'] == password:
           
# if there is a match, the user is logged in and we print a welcome message
            print ("Hosgeldiniz ['Kullanici Adi']!")
            return
    # if there is no match, we inform the user and prompt them to try again
    print("Gecersiz giris, lutfen tekrar deneyin.")

def main():
    # a simple menu to prompt the user to either create an account or log in
    print("Menuye Hosgeldiniz!!")
    print("1. Hesap olustur")
    print("2. Giris yap")
    print("3. Sifremi Unuttum")

    choice = int(input("Tuslama yapiniz"))

    if choice == 1:
        create_account()
    elif choice == 2:
        login()
    elif choice == 3:
        forgot_password()
    else:
        print("Yanlis Tuslama")
if __name__ == '__main__':
    main()
