# Nautilus-Image-Converter-Legacy

An extension for the GNOME Nautilus file manager to quickly resize and rotate images from the right-click context menu.

This version is based on the original `nautilus-image-converter` with a major new feature added.

## ✨ New Feature: Target File Size

This repository adds a powerful **"Target file size"** option to the "Resize Images" dialog.

This allows you to compress **JPG** and **PNG** images to an approximate target size (e.g., 50 KB), which is perfect for preparing images for web uploads or email or filling forms for exams and all kind of other application forms. Compress JPGs (using `jpegoptim`) or PNGs (using `convert`) to an approximate target size in KB or MB.



---

## Already Existing Features

* **Resize by Scale:** Scale images by a percentage (e.g., 50%).
* **Resize by Custom Size:** Set a specific pixel width and height.
* **Rotate Images:** Rotate 90°, 180°, or by a custom angle.
* **In-Place or New File:** Choose to overwrite your original images or create new copies (e.g., `image.resized.jpg`).

---

## Installation

### 1. Install Dependencies

You will need the build tools, `imagemagick`, and `jpegoptim`.

**On Ubuntu / Pop!_OS / Debian-based systems:**
```bash
sudo apt install libnautilus-extension-dev libgtk-3-dev imagemagick jpegoptim
```
# Nautilus-Image-Converter-Legacy

An extension for the GNOME Nautilus file manager to quickly resize and rotate images from the right-click context menu.

This version is based on the original `nautilus-image-converter` with a major new feature added.

## ✨ Features

This extension adds two options to your right-click menu: "Resize Images..." and "Rotate Images...".

#### Resize Images

* **NEW! Compress to Target File Size:** Compress **JPG** and **PNG** images to an approximate target size (e.g., 50 KB), which is perfect for preparing images for web uploads, email, or filling out application forms.
* **Resize by Scale:** Scale images by a percentage (e.g., 50%).
* **Resize by Custom Size:** Set a specific pixel width and height.

![Resize Images Dialog](image_cad405.png)

#### Rotate Images

* **Rotate Images:** Rotate 90°, 180°, or by a custom angle.

![Rotate Images Dialog](image_cad3e8.png)

#### Filename Options

Both tools give you the choice to:
* **In-Place:** Overwrite your original images.
* **Append:** Create new copies with a suffix (e.g., `image.resized.jpg`).

---

## Installation

### 1. Install Dependencies

You will need the build tools, `imagemagick`, and `jpegoptim`.

**On Ubuntu / Pop!_OS / Debian-based systems:**
```bash
sudo apt install libnautilus-extension-dev libgtk-3-dev imagemagick jpegoptim
````

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
