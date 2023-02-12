# AlacrittyBackgroundAHK

This is an autohotkey script to "get" background images for alacritty.

It works by minimizing other background windows when you focus alacritty.

I perrsonally use alacritty in fullscreen mode, which is achieved with:

```yml
window:
  startup_mode: Fullscreen
```

Also be sure to disable dynamic title and set the title to **Alacritty**:

```yml
window:
  title: Alacritty
  dynamic_title: false
```

## Installation

To install:

- Set the alacritty terminal to be transparent as such:

```yml
window:
  opacity: 0.8 #Change to your opacity
```

- Download the .zip

- Extract into some folder

- Run the ahk script
