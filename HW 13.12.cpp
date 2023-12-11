#include <iostream>
using namespace std;

class Cat {
private:
    int age;
    double weight;
    double height;
    bool limbs;
    bool ears;
    bool inoculation;
    string name;
    string type;
    string eyes_color;
    bool angry = false;

public:

    

    void Play()
    {
        cout << "Play with me in a ball" << "\n";
    }
    void Eat()
    {
        cout << "Give me food" << "\n";
    }
    void Pee()
    {
        cout << "Khm...Khm..." << "\n";
    }
    void Stealing() {
        cout << "It's not me...";
    }
    void Bath() {
        cout << "I have a bad smell ((";
    }

    void SetAge(int a) {
        if (a < 0 || a > 14) {
            throw "ERROR!\n";
        }
        age = a;
    }
    int GetAge() {
        return age;
    }

    void SetWeight(double w) {
        if (w < 0 || w > 10) {
            throw "ERROR!\n";
        }
        weight = w;
    }
    double GetWeight() {
        return weight;
    }
    void SetHeight(double h) {
        if (h < 0 || h > 120) {
            throw "ERROR!\n";
        }
        height = h;
    }
    double GetHeight() {
        return height;
    }

    void SetLimbs(bool l) {
        if (l == false) {
            throw "ERROR!\n";
        }
        limbs = l;
    }
    bool GetLimbs() {
        return limbs;
    }

    void SetEars(bool e) {
        if (e == false) {
            cout << "it's soo sad((\n";
        }
        ears = e;
    }
    bool GetEars() {
        return ears;
    }

    void SetInoculation(bool i) {
        if (i == false) {
            cout << "You need to do inoculation for your cat!\n";
        }
        inoculation = i;
    }
    bool GetInoculation() {
        return inoculation;
    }

    void SetAngry(bool an) {
        if (an == false) {
            cout << "Your cat is angry!!\n";
        }
        angry = an;
    }
    bool GetAngry() {
        return angry;
    }
};

class God {
private:

    bool is_angry = true;
    long long age;
    double weight;
    double height;
    bool existence;
    bool material_body;
    string name;
    string plans;
    string what_religion;

public:

    void SetIsangr(bool angry) {
        is_angry = angry;
    }
    bool GetIsangr() {
        return is_angry;
    }

    void Prayer()
    {
        cout << "I hear u" << "\n";
    }
    void Sins()
    {
        cout << "Let me know..." << "\n";
    }
    void Opinion()
    {
        cout << "Hmmm...i think..." << "\n";
    }
    void Punishment() {
        cout << "You are not a good person (";
    }
    void Forgiveness() {
        cout << "My child, i forgive u )))";
    }

    
    void SetIsangry(bool isan) {
        if (isan == true) {
            cout << "Emm... It's sooo bad\n";
        }
        is_angry = isan;
    }
    bool GetIsangry() {
        return is_angry;
    }

    void PlayWith(Cat& some_cat) {
        if (GetIsangry() == true)
        {
            SetIsangry(false);
        }
        if (some_cat.GetAngry() == true)
        {
            some_cat.SetAngry(false);
        }
    }


    void SetAge(long long ag) {
        if (ag < 0) {
            throw "ERROR!\n";
        }
        age = ag;
    }
    long long GetAge() {
        return age;
    }
    void SetWeight(double wh) {
        if (wh < 0) {
            throw "ERROR!\n";
        }
        weight = wh;
    }
    double GetWeight() {
        return weight;
    }

    void SetHeight(double hh) {
        if (hh < 0) {
            throw "ERROR!\n";
        }
        height = hh;
    }
    double GetHeight() {
        return height;
    }

    
    void SetExistence(bool ex) {
        if (ex == false) {
            cout << "God is real my son!!!\n";
        }
        existence = ex;
    }
    bool GetExistence() {
        return existence;
    }
    

    void SetMaterialbody(bool mat) {
        if (mat == false) {
            cout << "It's ok!\n";
        }
        cout << "Emm... if you can see a God it's not normal";
    }
    bool GetMaterialbody() {
        return material_body;
    }

 };

class Book {
private:
    unsigned int read_pages;
    unsigned int year_of_issue;
    double weight;
    double height;
    bool age_limits;
    bool paperback;
    int page_count;
    string name;
    string janr;
    string description;
    bool open = false;
public:

    void SetOpen(bool op) {
        open = op;
    }
    bool GetOpen() {
        return open;
    }
    void Be_called()
    {
        cout << "My name is..." << "\n";
    }
    void Inform()
    {
        cout << "I'm teaching about..." << "\n";
    }
    void Sized()
    {
        cout << "I'm not too fat" << "\n";
    }
    void Format() {
        cout << "I'm electronic";
    }
    void Illegal() {
        cout << "I'm keeping illegal information";
    }

    void ReadBook(God& some_god)
    {
        if (GetOpen() == false)
        {
            SetOpen(true);
        }
        read_pages += 3;
    }

    void SetReadpages(unsigned int rp) {
        if (rp > 100) {
            cout << "Not bad! continue!\n";
        }
        read_pages = rp;
    }
    int GetReadpages() {
        return read_pages;
    }

    void SetYearofissue(unsigned int yi) {
        if (yi > 2000) {
            cout << "it's a modern book\n";
        }
        if (yi > 1900 || yi < 2000) {
            cout << "it's an old book from the 20th century\n";
        }
        cout << "It is soooo ol book!\n";
    }
    int GetYearofissue() {
        return year_of_issue;
    }
    void SetWeight(double whe) {
        if (whe < 0) {
            throw "ERROR!\n";
        }
        weight = whe;
    }
    double GetWeight() {
        return weight;
    }

    void SetHeight(double hhi) {
        if (hhi < 0) {
            throw "ERROR!\n";
        }
        height = hhi;
    }
    double GetHeight() {
        return height;
    }

    void SetAgelimits(bool al) {
        if (al == true) {
            cout << "Close this book little baby!\n";
        }
        cout << "Good read! baby\n";
    }
    bool GetAgelimits() {
        return age_limits;
    }
    void SetPaperback(bool pb) {
        if (pb == false) {
            cout << "It's cheep\n";
        }
        paperback = pb;
    }
    bool GetPaperback() {
        return paperback;
    }
    void SetPagecount(bool pc) {
        if (pc < 0) {
            throw "ERROR!!!";
        }
        page_count = pc;
    }
    bool GetPagecount() {
        return page_count;
    }
    

};





class Glasses {
private:

    unsigned short shelf_life;
    double weight;
    double height;
    bool for_minus;
    bool for_computer;
    bool panes;
    string brand;
    unsigned int seria;
    string form;
    bool sunny = false;
    bool is_ok = true;

public:

    void SetIsok(bool ok) {
        is_ok = ok;
    }
    bool GetIsok() {
        return is_ok;
    }
    void SetSunny(bool sun) {
        sunny = sun;
    }
    bool GetSunny() {
        return sunny;
    }

    void Application()
    {
        cout << "I will protect u : )" << "\n";
    }
    void Mminus()
    {
        cout << "I'm for -3" << "\n";
    }
    void Gender_use()
    {
        cout << "I'm better to use for women" << "\n";
    }
    void Benefit() {
        cout << "I'm improving your health.";
    }
    void Recipe() {
        cout << "I'm a prescription";
    }

    void CatPlay(Cat& some_cat) {
        if (some_cat.GetAngry() == true) {
            SetIsok(false);
        }
        if (some_cat.GetAngry() == false) {
            SetIsok(true);
        }
    }

    void SetWeight(double wght) {
        if (wght < 0 || wght > 1.0) {
            throw "ERROR!!";
        }
        weight = wght;
    }
    double GeWeight() {
        return weight;
    }

    void SetHeight(double hght) {
        if (hght < 0 || hght > 30) {
            throw "ERROR!!";
        }
        height = hght;
    }
    double GetHeight() {
        return height;
    }
    void SetForminus(bool min) {
        if (min == true) {
            cout << "It's glasses for you if you had a minus\n";
        }
        cout << "It's not for you if you had plus!\n";
    }
    bool GetForminus() {
        return for_minus;
    }

    void SetForcomputer(bool comp) {
        if (comp == true) {
            cout << "It's for you if you have a computer\n";
        }
        cout << "If you dont have a computer you dont need this glasses\n";
    }
    bool GetForcomputer() {
        return for_computer;
    }

    void SetPanes(bool pan) {
        if (pan == true) {
            cout << "Put the glass in, baby.!\n";
        }
        cout << "You have a good glasses\n";
    }
    bool GetPanes() {
        return panes;
    }
    void SetSeria(unsigned int ser) {
        if (ser < 0) {
            throw "ERROR!";
        }
        seria = ser;
    }
    unsigned int GetSeria() {
        return seria;
    }
   

};

class Vampire {
private:
    bool is_live = true;
    bool worn_glasses;
    unsigned int age;
    double weight;
    double height;
    bool abilities;
    bool fangs;
    bool transformation;
    string name;
    string nation;
    string name_power;
public:

    void SetLive(bool live) {
        is_live = live;
    }
    bool GetLive() {
        return is_live;
    }

    void SetWorn(bool worn) {
        worn_glasses = worn;
    }
    bool GetWorn() {
        return worn_glasses;
    }
    void Blood()
    {
        cout << "I want eat uuuuuuuuuuuu" << "\n";
    }
    void Feel()
    {
        cout << "Bella, i love you <3 " << "\n";
    }
    void Use_of_power()
    {
        cout << "I steal donuts because I'm invisible" << "\n";
    }
    void Bat() {
        cout << "No, i can't be a mouse with wingth";
    }
    void Vegetarian() {
        cout << "Aanumals are my friends";
    }

    void Sun(Glasses& sun_glasses) {
        if (sun_glasses.GetSunny() == true) {
            SetWorn(true);
        }
        if (sun_glasses.GetSunny() == true and GetWorn() == false) {
            SetWorn(false);
        }
    }

    void GoodGod(God& god) {
        if (god.GetIsangry() == false) {
            SetLive(true);
        }
        if (god.GetIsangry() == true) {
            SetLive(false);
        }
    }

    void SetAge(unsigned int age) {
        if (age < 0 || age > 1000000) {
            throw "ERROR!!";
        }
        age = age;
    }
    unsigned int GetAge() {
        return age;
    }

    void SetWeight(double weght) {
        if (weght < 0 || weght > 273) {
            throw "ERROR!!";
        }
        weight = weght;
    }
    double GetWeight() {
        return weight;
    }
    void SetHeight(double heght) {
        if (heght < 0 || heght > 220) {
            throw "ERROR!!!\n";

        }
        height = heght;
    }
    double GetHeight() {
        return height;
    }

    void SetAbilities(bool abi) {
        if (abi == true) {
            cout << "A vampire must learn to use his abilities\n";
        }
        cout << "A vampire has no abilities\n";
    }
    bool GetAbilities() {
        return abilities;
    }

    void SetFangs(bool fan) {
        if (fan == true) {
            cout << "This vampire probably likes blood\n";
        }
        cout << "This vampire doesn't feed on blood\n";
    }
    bool GetFangs() {
        return fangs;
    }

};



int main()
{
    Glasses glasses;
    glasses.SetForcomputer(true);
    cout << glasses.GetForcomputer();
    glasses.SetForminus(true);
    cout << glasses.GetForminus();
    glasses.SetHeight(10);
    cout << glasses.GetHeight();
    glasses.SetPanes(false);
    cout << glasses.GetPanes();
    glasses.SetSeria(17732838);
    cout << glasses.GetSeria();
    glasses.SetWeight(0.2);
    cout << glasses.GeWeight();
    

    Vampire vampire;
    vampire.SetAbilities(true);
    cout << vampire.GetAbilities();
    vampire.SetAge(268);
    cout << vampire.GetAge();
    vampire.SetFangs(true);
    cout << vampire.GetFangs();
    vampire.SetHeight(185);
    cout << vampire.GetHeight();
    vampire.SetWeight(98);
    cout << vampire.GetWeight();
    

    Book book;
    book.SetAgelimits(true);
    cout << book.GetAgelimits();
    book.SetHeight(20);
    book.GetHeight();
    book.SetPagecount(65);
    cout << book.GetPagecount();
    book.SetPaperback(false);
    cout << book.GetPaperback();
    book.SetReadpages(120);
    cout << book.GetReadpages();
    book.SetWeight(3);
    cout << book.GetWeight();
    book.SetYearofissue(2006);
    cout << book.GetYearofissue();
    

    God god;

    god.SetAge(82736);
    cout << god.GetAge();
    god.SetExistence(false);
    cout << god.GetExistence();
    god.SetHeight(1000000);
    cout << god.GetHeight();
    god.SetIsangry(true);
    cout << god.GetIsangry();
    god.SetMaterialbody(true);
    cout << god.GetMaterialbody();
    god.SetWeight(4793480);
    cout << god.GetWeight();

    Cat cat;
    cat.SetAge(2);
    cout << cat.GetAge() << "\n";
    cat.SetAngry(true);
    cout << cat.GetAngry() << "\n";
    cat.SetEars(false);
    cout << cat.GetEars() << "\n";
    cat.SetHeight(98);
    cout << cat.GetHeight();
    cat.SetInoculation(false);
    cout << cat.GetInoculation();
    cat.SetLimbs(true);
    cout << cat.GetLimbs();
    cat.SetWeight(4);
    cout << cat.GetWeight();
    vampire.GoodGod(god);
    vampire.Sun(glasses);
    glasses.CatPlay(cat);
    book.ReadBook(god);
    god.PlayWith(cat);


}