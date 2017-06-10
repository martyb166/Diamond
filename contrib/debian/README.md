
Debian
====================
This directory contains files used to package diamondd/diamond-qt
for Debian-based Linux systems. If you compile diamondd/diamond-qt yourself, there are some useful files here.

## diamond: URI support ##


diamond-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install diamond-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your diamondqt binary to `/usr/bin`
and the `../../share/pixmaps/diamond128.png` to `/usr/share/pixmaps`

diamond-qt.protocol (KDE)

