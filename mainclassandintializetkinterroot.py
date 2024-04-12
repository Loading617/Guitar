# Creating main class called "MusicPlayer" and initializing the root window
class MusicPlayer:

    # Initializing the root window
    def __init__(self, root):
        self.root = root

        # Title and geometry of the root window
        self.root.title = ("DataFlair - MusicPlayer")

        # Setting the geometry of the root window
        self.root.geometry("750x400")
        self.root.resizable(False, False)

        # Setting the background image
        self.bg_image = tk.PhotoImage(file = os.path.join(os.getcwd(), "MusicPlayer/images", "bg_con.png"))
        self.bg_label = ttk.Label(self.root, image=self.bg_image)
        self.bg_label.place(relx=0, rely=-0, relwidth=1, relheight=1)

        # Setting style for the root window
        s = ttk.style()
        s.theme_use('clam')
        s.configure('.', background='black', foreground='black',)
        s.configure('TFrame', background='white', foreground='white')
        s.configure('TButton', font=('Nexa', 12), background='black', foreground='white',
                             activebackground='black', activeforeground='white')
        s.configure('TLabel', font=('Nexa', 12), background='black', foreground='white')
        s.configure('TScale', background='white')

        # Initializing Pygame
        pygame.init()

        # Initializing Pygame Mixer
        pygame.mixer.init()