
Debian
====================
This directory contains files used to package lobstexd/lobstex-qt
for Debian-based Linux systems. If you compile lobstexd/lobstex-qt yourself, there are some useful files here.

## lobstex: URI support ##


lobstex-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install lobstex-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your lobstexqt binary to `/usr/bin`
and the `../../share/pixmaps/lobstex128.png` to `/usr/share/pixmaps`

lobstex-qt.protocol (KDE)

