
# Nautilus-Image-Converter-Legacy

An extension for the GNOME Nautilus file manager to quickly resize and rotate images from the right-click context menu.

This repository is a fork of the original `nautilus-image-converter` from GNOME, updated with a powerful new feature.

## ✨ New Feature: Target File Size

This fork adds a **"Target file size"** option to the "Resize Images" dialog.

This allows you to compress **JPG** and **PNG** images to an approximate target size (e.g., 50 KB), which is perfect for preparing images for web uploads, email, or filling out application forms.



---

## Core Features (from Original Project)

All the original features of the `nautilus-image-converter` are fully intact:

* **Resize by Scale:** Scale images by a percentage (e.g., 50%).
* **Resize by Custom Size:** Set a specific pixel width and height.
* **Rotate Images:** Rotate 90°, 180°, or by a custom angle.
* **In-Place or New File:** Choose to overwrite your original images or create new copies (e.g., `image.resized.jpg`).

![Resize Images Dialog with new 'Target file size' option](images/SS1.png  {width=40px height=400px})
![Rotate Images Dialog](images/SS2.png  {width=40px height=400px})

---

## Installation

### 1. Install Dependencies

You will need the build tools, `imagemagick`, and `jpegoptim` (for the new feature).

**On Ubuntu / Pop!_OS / Debian-based systems:**
```bash
sudo apt install libnautilus-extension-dev libgtk-3-dev imagemagick jpegoptim
```

### 2\. Build and Install

```bash
# 1. Clone this repository
git clone [https://github.com/Ameen-Sha-Cheerangan/nautilus-image-converter-legacy.git](https://github.com/Ameen-Sha-Cheerangan/nautilus-image-converter-legacy.git)

# 2. Enter the new directory
cd nautilus-image-converter-legacy

# 3. Run configure
./configure

# 4. Build
make

# 5. Install
sudo make install
```

### 3\. Restart Nautilus (Important\!)

You **must** restart Nautilus for the extension to load.

```bash
nautilus -q
```

Now you can right-click on any JPG or PNG image to see the new options.

-----

## Original Project

This repository is a fork of the original `nautilus-image-converter` from GNOME. The new "Target file size" feature was added by [Ameen Sha Cheerangan](https://github.com/Ameen-Sha-Cheerangan).

The original project can be checked out with the following command:

`git clone git://git.gnome.org/nautilus-image-converter`

Patches welcomed\!

```
```
