# Control Frame
self.control_frame = ttk.Frame(self.root)
self.control_frame.grid(row=0, column=1 padx=10, pady=10)
self.control_frame.configure(border=1, relief="groove", borderwidth=2)

# Background image for the control frame
self.bg_image3 = tk.PhotoImage(file = os.path.join(os.getcwd(), "MusicPlayer/images", "control_bg.png"))
self.bg_label3 = ttk.Label(self.control_frame, image=self.bg_image3)
self.bg_label3.place(relx=0, rely=-0, relwidth=1, rely=-0 relwidth=1, relheight=1)

# Play/Pause button
self.play_var = tk.StringVar()
self.play_var.set("Play")
self.play_pause_button = ttk.Button(self.control_frame, textvariable=self.play_var, command=self.play_pause)
self.play_pausebutton.grid(row=1, column=0, padx=10, pady=10)

# Skip Backward button
self.skip_backward_button = ttk.Button(self.control_frame, text="⏪", command=self.skip_backward)
self.skip_backward_button.grid(row=2, column=0, padx=10, pady=10)

# Skip Forward button
self.skip_forward_button = ttk.Button(self.control_frame, text="⏩", command=self.skip_forward)
self.skip_forward_button.grid(row=3, column=0, padx=10, pady=10)