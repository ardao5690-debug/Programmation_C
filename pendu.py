import math
import random
import tkinter as tk
from tkinter import messagebox, ttk

# --- 1. DICTIONNAIRE DE TRADUCTIONS ET SCRIPT DE LANGUE ---
TEXTES = {
    "fr": {
        "menu_titre": "🌵 JACK LE PENDU 🤠",
        "btn_jouer": "🎮 JOUER",
        "btn_params": "⚙️ PARAMÈTRES",
        "lbl_categorie": "Catégorie :",
        "lbl_difficulte": "Difficulté :",
        "lbl_langue": "Langue :",
        "btn_retour": "🔙 RETOUR",
        "btn_menu": "🏠 MENU PRINCIPAL",
        "essais": "🏜️ Essais restants :",
        "victoire_titre": "Victoire !",
        "victoire_msg": "🤠 Bravo Partner ! Tu as sauvé Jack ! Le mot était : ",
        "defaite_titre": "Défaite !",
        "defaite_msg": "🌵 Oh non, Jack est tombé ! Le mot était : ",
    },
    "en": {
        "menu_titre": "🌵 HANGMAN JACK 🤠",
        "btn_jouer": "🎮 PLAY",
        "btn_params": "⚙️ SETTINGS",
        "lbl_categorie": "Category:",
        "lbl_difficulte": "Difficulty:",
        "lbl_langue": "Language:",
        "btn_retour": "🔙 BACK",
        "btn_menu": "🏠 MAIN MENU",
        "essais": "🏜️ Tries left:",
        "victoire_titre": "Victory!",
        "victoire_msg": "🤠 Well done Partner! You saved Jack! The word was: ",
        "defaite_titre": "Defeat!",
        "defaite_msg": "🌵 Oh no, Jack is down! The word was: ",
    },
    "es": {
        "menu_titre": "🌵 JACK EL AHORCADO 🤠",
        "btn_jouer": "🎮 JUGAR",
        "btn_params": "⚙️ AJUSTES",
        "lbl_categorie": "Categoría:",
        "lbl_difficulte": "Dificultad:",
        "lbl_langue": "Idioma:",
        "btn_retour": "🔙 VOLVER",
        "btn_menu": "🏠 MENÚ PRINCIPAL",
        "essais": "🏜️ Intentos restantes:",
        "victoire_titre": "¡Victoria!",
        "victoire_msg": "🤠 ¡Bravo socio! ¡Has salvado a Jack! La palabra era: ",
        "defaite_titre": "¡Derrota!",
        "defaite_msg": "🌵 ¡Oh no, Jack ha caído! La palabra era: ",
    },
}

langue_joueur = "fr"


def changer_langue(nouvelle_langue):
    global langue_joueur
    if nouvelle_langue in TEXTES:
        langue_joueur = nouvelle_langue
        appliquer_langue_ui()


# --- BANQUE DE MOTS GEANTE ---
MOTS = {
    "Fruits 🍎": [
        "BANANE",
        "POMME",
        "FRAISE",
        "ORANGE",
        "ANANAS",
        "MANGUE",
        "CERISE",
        "PASTEQUE",
        "KIWI",
        "CITRON",
        "FRAMBOISE",
        "MELON",
        "POIRE",
        "PAMPLEMOUSSE",
        "ABRICOT",
        "PECHE",
        "PRUNE",
        "FIGUE",
        "MYRTILLE",
        "CASSIS",
        "AVOCAT",
        "GRENADE",
        "DATTE",
        "CLEMENTINE",
        "NECTARINE",
        "MIRABELLE",
        "COCO",
        "LITCHI",
        "PAPAYE",
        "PASSION",
        "RHUBARBE",
        "BRIDEL",
        "KAKI",
        "BRIGNOLE",
        "GUIGNE",
        "GROSEILLE",
        "AMANDE",
        "COGNASSIER",
        "NOIX",
        "NOISETTE",
        "PISTACHE",
        "CHATAIGNE",
        "MARRON",
        "KUMQUAT",
        "RAMBOUTAN",
        "CARAMBOLE",
        "FEIJOA",
        "PHYSALIS",
        "PITAYA",
        "ANONA",
        "COMBAVA",
    ],
    "Sports ⚽": [
        "FOOTBALL",
        "BASKETBALL",
        "NATATION",
        "TENNIS",
        "JUDO",
        "KARATE",
        "ESCALADE",
        "VOLLEYBALL",
        "HANDBALL",
        "RUGBY",
        "ATHLETISME",
        "CYCLISME",
        "BOXE",
        "GOLF",
        "EQUITATION",
        "BADMINTON",
        "ESCRIME",
        "GYMNASTIQUE",
        "SKATEBOARD",
        "SURF",
        "CURLING",
        "HOCKEY",
        "TAEKWONDO",
        "AVIRON",
        "TRIATHLON",
        "PENTATHLON",
        "SKI",
        "SNOWBOARD",
        "PINGPONG",
        "SQUASH",
        "WATERPOLO",
        "TIRALARC",
        "BOULES",
        "CANYONING",
        "KITESURF",
        "PARAPENTE",
        "BOBSLEIGH",
        "LUGE",
        "BIATHLON",
        "BASEBALL",
        "CRICKET",
        "KICKBOXING",
        "SUMO",
        "AIKIDO",
        "HALTEROPHILIE",
        "KARTING",
        "MOTOCROSS",
        "PADEL",
    ],
    "Métiers 🧑‍🚒": [
        "POMPIER",
        "MEDECIN",
        "POLICIER",
        "AVOCAT",
        "CUISINIER",
        "PILOTE",
        "PROFESSEUR",
        "ARCHITECTE",
        "BOULANGER",
        "COIFFEUR",
        "DENTISTE",
        "INFORMATICIEN",
        "INGENIEUR",
        "JOURNALISTE",
        "MECANICIEN",
        "MENUISIER",
        "PHARMACIEN",
        "VETERINAIRE",
        "PLOMBIER",
        "ELECTRICIEN",
        "AGRICULTEUR",
        "BANQUIER",
        "CHIRURGIEN",
        "COMPTABLE",
        "DESSINATEUR",
        "INFIRMIER",
        "COMMERCIALE",
        "MACON",
        "NOTAIRE",
        "PHOTOGRAPHE",
        "SERGENT",
        "COUTURIER",
        "ASTRONAUTE",
        "BIOLOGISTE",
        "CHIMISTE",
        "ELEVEUR",
        "FLEURISTE",
        "GEOLOGUE",
        "HORLOGER",
        "ILLUSTRATEUR",
        "LIBRARIE",
        "MAGICIEN",
        "EBENISTE",
        "OPTICIEN",
        "SCULPTEUR",
    ],
    "Joueurs de Foot 🏃": [
        "MBAPPE",
        "RONALDO",
        "MESSI",
        "NEYMAR",
        "BENZEMA",
        "ZIDANE",
        "HAALAND",
        "VINICIUS",
        "BELLINGHAM",
        "MODRIC",
        "KANE",
        "SALAH",
        "GRIEZMANN",
        "KANTE",
        "INIESTA",
        "RONALDINHO",
        "MARADONA",
        "PELE",
        "BUFFON",
        "COURTOIS",
        "CRUYFF",
        "PIRLO",
        "XAVI",
        "HENRY",
        "KAKA",
        "ETOO",
        "DROGBA",
        "ROONEY",
        "GARRINCHA",
        "CASILLAS",
        "NEUER",
        "RAMOS",
        "MALDINI",
        "BAGGIO",
        "PUSKAS",
        "PLATINI",
        "YASHIN",
        "RODRYGO",
        "PEDRI",
        "GAVI",
        "SANE",
        "SON",
        "DONNARUMMA",
        "OBLAK",
        "VANDIJK",
        "HAZARD",
        "LUKAKU",
        "CAVANI",
        "SUAREZ",
        "AGUERO",
    ],
    "Pays 🌍": [
        "FRANCE",
        "ESPAGNE",
        "ITALIE",
        "JAPON",
        "BRESIL",
        "CANADA",
        "MAROC",
        "SENEGAL",
        "ALLEMAGNE",
        "ARGENTINE",
        "AUSTRALIE",
        "CHINE",
        "EGYPTE",
        "ETATSUNIS",
        "INDE",
        "MEXIQUE",
        "PORTUGAL",
        "RUSSIE",
        "SUISSE",
        "ALGERIE",
        "TUNISIE",
        "CAMEROUN",
        "VIETNAM",
        "BELGIQUE",
        "ANGLETERRE",
        "TURQUIE",
        "GRECE",
        "SUEDE",
        "NORVEGE",
        "DANEMARK",
        "PAYSBAS",
        "POLOGNE",
        "UKRAINE",
        "COLOMBIE",
        "PEROU",
        "CHILI",
        "ANGOLA",
        "COREE",
        "FINLANDE",
        "IRLANDE",
        "ISLANDE",
        "INDONESIE",
        "IRAN",
        "ISRAEL",
        "JAMAIQUE",
        "KENYA",
        "MADAGASCAR",
        "MALAISIE",
        "NIGERIA",
        "NOUVELLEZELANDE",
    ],
    "Animaux 🦁": [
        "LION",
        "TIGRE",
        "ELEPHANT",
        "GIRAFE",
        "DAUPHIN",
        "AIGLE",
        "CANGOUROU",
        "PANDA",
        "LOUP",
        "OURS",
        "REQUIN",
        "SERPENT",
        "CHEVAL",
        "SINGE",
        "CROCODILE",
        "HIPPOPOTAME",
        "RHINOCEROS",
        "PANTHERE",
        "LEOPARD",
        "GUEPARD",
        "ZEBRE",
        "GAZELLE",
        "KOALA",
        "GORILLE",
        "CHIMPANZE",
        "CAMALEON",
        "AUTRUCHE",
        "PINGOUIN",
        "MANCHOT",
        "ORQUE",
        "BALEINE",
        "CASTOR",
        "CHOUETTE",
        "ECUREUIL",
        "HERISSON",
        "FLAMANT",
        "IGUANE",
        "JAGUAR",
        "LEMURIEN",
        "LAMA",
        "MANATU",
        "LOUTRE",
        "OISEAU",
        "PAON",
    ],
    "Capitales 🏛️": [
        "PARIS",
        "MADRID",
        "ROME",
        "TOKYO",
        "LONDRES",
        "BERLIN",
        "RABAT",
        "OTTAWA",
        "LISBONNE",
        "BRASILIA",
        "WASHINGTON",
        "PEKIN",
        "ALGER",
        "TUNIS",
        "BAKOU",
        "ATHENES",
        "BRUXELLES",
        "AMSTERDAM",
        "VIENNE",
        "BERNE",
        "PRAGUE",
        "BUDAPEST",
        "MOSCOU",
        "CANBERRA",
        "LECAIRE",
        "DAKAR",
        "LIMA",
        "BOGOTA",
        "SANTIAGO",
        "BANGKOK",
        "ABUDHABI",
        "ANKARA",
        "BAGDAD",
        "BEYROUTH",
        "DUBLIN",
        "HELSINKI",
        "KIEV",
        "NEWDELHI",
        "OSLO",
        "REYKJAVIK",
        "SEOUL",
        "STOCKHOLM",
        "VARSOVIE",
        "WELLINGTON",
    ],
    "Marques 🚗": [
        "NIKE",
        "ADIDAS",
        "PUMA",
        "APPLE",
        "SAMSUNG",
        "TOYOTA",
        "PEUGEOT",
        "RENAULT",
        "BMW",
        "MERCEDES",
        "GUCCI",
        "SONY",
        "TESLA",
        "NINTENDO",
        "FERRARI",
        "AUDI",
        "VOLKSWAGEN",
        "MICROSOFT",
        "AMAZON",
        "GOOGLE",
        "REDBULL",
        "ROLEX",
        "CHANEL",
        "PORSCHE",
        "LAMBORGHINI",
        "HONDA",
        "HYUNDAI",
        "CITROEN",
        "FIAT",
        "FORD",
        "CHEVROLET",
        "DISNEY",
        "MCDONALD",
        "COCACOLA",
        "PEPSI",
        "PLAYSTATION",
        "XBOX",
        "NETFLIX",
        "SPOTIFY",
    ],
}

DIFFICULTES = {
    "Facile (8 essais)": 8,
    "Moyen (6 essais)": 6,
    "Difficile (4 essais)": 4,
}

PENDU_DESSINS = [
    "       +---+\n       |   |\n           |\n           |\n           |\n     =======",
    "       +---+\n       |   |\n     _/\_ |\n           |\n           |\n     =======",
    "       +---+\n       |   |\n     _/\_ |\n    ( o.o)|\n           |\n     =======",
    "       +---+\n       |   |\n     _/\_ |\n    ( o.o)|\n       |   |\n     =======",
    "       +---+\n       |   |\n     _/\_ |\n    ( o.o)|\n     /|   |\n     =======",
    "       +---+\n       |   |\n     _/\_ |\n    ( o.o)|\n     /|\\  |\n     =======",
    "       +---+\n       |   |\n     _/\_ |\n    ( o.o)|\n     /|\\  |\n     /    |\n     =======",
    "       +---+\n       |   |\n     _/\_ |\n    ( o.o)|\n     /|\\  |\n     / \\  |\n     =======",
    "       +---+\n       |   |\n     _/\_ |\n    ( x.x)|\n     /|\\  |\n     / \\  |\n     =======",
]

# Variable globale pour l'animation
angle_doigt = 0


# --- FONCTIONS POUR L'ANIMATION DU COWBOY ---
def dessiner_cowboy(canvas):
    global angle_doigt
    canvas.delete("all")

    # Chapeau
    canvas.create_oval(20, 30, 100, 50, fill="#8C3B0C", outline="#3D1C00", width=2)
    canvas.create_rectangle(
        40, 10, 80, 35, fill="#8C3B0C", outline="#3D1C00", width=2
    )

    # Tête
    canvas.create_oval(40, 40, 80, 80, fill="#FFD1A4", outline="#3D1C00", width=2)
    # Yeux & Yeux
    canvas.create_oval(48, 52, 54, 58, fill="#3D1C00")
    canvas.create_oval(66, 52, 72, 58, fill="#3D1C00")
    canvas.create_line(55, 68, 65, 68, fill="#3D1C00", width=2)

    # Corps
    canvas.create_rectangle(
        45, 80, 75, 130, fill="#8C3B0C", outline="#3D1C00", width=2
    )

    # Bras gauche fixe
    canvas.create_line(45, 85, 25, 110, fill="#8C3B0C", width=6)

    # Bras droit et DOIGT ANIMÉ (Oscillation verticale)
    decalage_y = math.sin(angle_doigt) * 8
    canvas.create_line(
        75, 85, 100, 75 + decalage_y, fill="#8C3B0C", width=6
    )  # Bras
    canvas.create_line(
        100,
        75 + decalage_y,
        112,
        65 + decalage_y,
        fill="#FFD1A4",
        width=4,
        capstyle="round",
    )  # Doigt qui pointe


def animer_cowboy():
    global angle_doigt
    angle_doigt += 0.2
    dessiner_cowboy(canvas_cowboy_menu)
    fenetre.after(50, animer_cowboy)


# --- FONCTIONS DE MISE À JOUR DE L'INTERFACE SEGON LA LANGUE ---
def appliquer_langue_ui():
    txt = TEXTES[langue_joueur]
    lbl_titre_menu.config(text=txt["menu_titre"])
    btn_jouer.config(text=txt["btn_jouer"])
    btn_params.config(text=txt["btn_params"])
    lbl_cat.config(text=txt["lbl_categorie"])
    lbl_diff.config(text=txt["lbl_difficulte"])
    lbl_lang.config(text=txt["lbl_langue"])
    btn_retour.config(text=txt["btn_retour"])
    btn_menu_jeu.config(text=txt["btn_menu"])


def sur_changement_langue(event):
    choix = combo_langue.get().lower()
    changer_langue(choix)


# --- FONCTIONS DE NAVIGATION ---
def afficher_ecran(ecran):
    cadre_accueil.pack_forget()
    cadre_parametres.pack_forget()
    cadre_jeu.pack_forget()
    ecran.pack(expand=True, fill="both")


def lancer_jeu():
    nouvelle_partie()
    afficher_ecran(cadre_jeu)


def ouvrir_parametres():
    afficher_ecran(cadre_parametres)


def retour_menu():
    afficher_ecran(cadre_accueil)


# --- FONCTIONS DU JEU ---
def nouvelle_partie():
    global mot_secret, mot_masque, vies_max, vies_restantes
    txt = TEXTES[langue_joueur]
    categorie = combo_categorie.get()
    mot_secret = random.choice(MOTS[categorie])
    mot_masque = ["*"] * len(mot_secret)
    vies_max = DIFFICULTES[combo_difficulte.get()]
    vies_restantes = vies_max

    label_mot.config(text=" ".join(mot_masque))
    label_dessin.config(text=PENDU_DESSINS[0])
    label_infos.config(text=f"{txt['essais']} {vies_restantes}/{vies_max}")

    for btn in boutons_clavier.values():
        btn.config(state="normal", bg="#FF9D3B", fg="#3D1C00")


def deviner_lettre(lettre):
    global vies_restantes
    txt = TEXTES[langue_joueur]
    boutons_clavier[lettre].config(
        state="disabled", bg="#8C8C8C", fg="#FFFFFF"
    )

    if lettre in mot_secret:
        for i in range(len(mot_secret)):
            if mot_secret[i] == lettre:
                mot_masque[i] = lettre
        label_mot.config(text=" ".join(mot_masque))
        if "*" not in mot_masque:
            messagebox.showinfo(
                txt["victoire_titre"], f"{txt['victoire_msg']}{mot_secret}"
            )
            lancer_jeu()
    else:
        vies_restantes -= 1
        label_infos.config(text=f"{txt['essais']} {vies_restantes}/{vies_max}")

        fautes_commises = vies_max - vies_restantes
        ratio = fautes_commises / vies_max
        max_etape = len(PENDU_DESSINS) - 1

        if vies_restantes <= 0:
            index_dessin = max_etape
        else:
            index_dessin = min(int(ratio * max_etape), max_etape - 1)

        label_dessin.config(text=PENDU_DESSINS[index_dessin])

        if vies_restantes <= 0:
            messagebox.showerror(
                txt["defaite_titre"], f"{txt['defaite_msg']}{mot_secret}"
            )
            lancer_jeu()


# --- FENÊTRE PRINCIPALE ---
fenetre = tk.Tk()
fenetre.title("Jack le Pendu - Édition Western")
fenetre.geometry("650x800")
fenetre.configure(bg="#D97724")

# ==================== ÉCRAN D'ACCUEIL ====================
cadre_accueil = tk.Frame(fenetre, bg="#D97724")

lbl_titre_menu = tk.Label(
    cadre_accueil,
    text="",
    font=("Impact", 32, "italic"),
    bg="#D97724",
    fg="#FFF3E0",
)
lbl_titre_menu.pack(pady=20)

cadre_centre = tk.Frame(cadre_accueil, bg="#D97724")
cadre_centre.pack(pady=10)

# Zone animée du Cowboy
canvas_cowboy_menu = tk.Canvas(
    cadre_centre, width=130, height=150, bg="#D97724", highlightthickness=0
)
canvas_cowboy_menu.pack(side="left", padx=20)

cadre_boutons_menu = tk.Frame(cadre_centre, bg="#D97724")
cadre_boutons_menu.pack(side="right", padx=20)

btn_jouer = tk.Button(
    cadre_boutons_menu,
    text="",
    font=("Impact", 18),
    bg="#8C3B0C",
    fg="white",
    width=12,
    command=lancer_jeu,
)
btn_jouer.pack(pady=15)

btn_params = tk.Button(
    cadre_boutons_menu,
    text="",
    font=("Impact", 16),
    bg="#8C3B0C",
    fg="white",
    width=12,
    command=ouvrir_parametres,
)
btn_params.pack(pady=15)

# ==================== ÉCRAN PARAMÈTRES ====================
cadre_parametres = tk.Frame(fenetre, bg="#8C3B0C", padx=20, pady=20)

tk.Label(
    cadre_parametres,
    text="⚙️ PARAMÈTRES",
    font=("Impact", 24),
    bg="#8C3B0C",
    fg="white",
).pack(pady=15)

lbl_cat = tk.Label(
    cadre_parametres,
    text="",
    font=("Arial", 12, "bold"),
    bg="#8C3B0C",
    fg="white",
)
lbl_cat.pack(pady=2)
combo_categorie = ttk.Combobox(
    cadre_parametres,
    values=list(MOTS.keys()),
    state="readonly",
    width=25,
)
combo_categorie.current(0)
combo_categorie.pack(pady=5)

lbl_diff = tk.Label(
    cadre_parametres,
    text="",
    font=("Arial", 12, "bold"),
    bg="#8C3B0C",
    fg="white",
)
lbl_diff.pack(pady=2)
combo_difficulte = ttk.Combobox(
    cadre_parametres,
    values=list(DIFFICULTES.keys()),
    state="readonly",
    width=25,
)
combo_difficulte.current(1)
combo_difficulte.pack(pady=5)

lbl_lang = tk.Label(
    cadre_parametres,
    text="",
    font=("Arial", 12, "bold"),
    bg="#8C3B0C",
    fg="white",
)
lbl_lang.pack(pady=2)
combo_langue = ttk.Combobox(
    cadre_parametres, values=["FR", "EN", "ES"], state="readonly", width=25
)
combo_langue.current(0)
combo_langue.pack(pady=5)
combo_langue.bind("<<ComboboxSelected>>", sur_changement_langue)

btn_retour = tk.Button(
    cadre_parametres,
    text="",
    font=("Impact", 14),
    bg="#FF9D3B",
    fg="#3D1C00",
    command=retour_menu,
)
btn_retour.pack(pady=30)

# ==================== ÉCRAN DE JEU ====================
cadre_jeu = tk.Frame(fenetre, bg="#D97724")

label_infos = tk.Label(
    cadre_jeu, text="", font=("Arial", 12, "bold"), bg="#D97724", fg="#FFF3E0"
)
label_infos.pack(pady=5)

label_dessin = tk.Label(
    cadre_jeu,
    text="",
    font=("Courier", 12, "bold"),
    bg="#D97724",
    fg="#2C1402",
    justify="left",
)
label_dessin.pack(pady=5)

label_mot = tk.Label(
    cadre_jeu,
    text="",
    font=("Courier", 26, "bold"),
    bg="#FFF8E7",
    fg="#2C1402",
    padx=20,
    pady=8,
    relief="ridge",
    bd=4,
)
label_mot.pack(pady=10)

cadre_clavier = tk.Frame(cadre_jeu, bg="#D97724")
cadre_clavier.pack(pady=5)

boutons_clavier = {}
l, c = 0, 0
for lettre in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
    btn = tk.Button(
        cadre_clavier,
        text=lettre,
        width=4,
        height=2,
        font=("Arial", 10, "bold"),
        command=lambda char=lettre: deviner_lettre(char),
    )
    btn.grid(row=l, column=c, padx=3, pady=3)
    boutons_clavier[lettre] = btn
    c += 1
    if c > 6:
        c, l = 0, l + 1

btn_menu_jeu = tk.Button(
    cadre_jeu,
    text="",
    font=("Impact", 12),
    bg="#8C3B0C",
    fg="white",
    command=retour_menu,
)
btn_menu_jeu.pack(pady=15)

# Lancement de la configuration et des animations
appliquer_langue_ui()
afficher_ecran(cadre_accueil)
animer_cowboy()

fenetre.mainloop()