# Nautilus-Image-Converter-Legacy

An extension for the GNOME Nautilus file manager to quickly resize and rotate images from the right-click context menu.

This version is based on the original `nautilus-image-converter` with a major new feature added.

## ✨ New Feature: Target File Size

This repository adds a powerful **"Target file size"** option to the "Resize Images" dialog.

This allows you to compress **JPG** and **PNG** images to an approximate target size (e.g., 50 KB), which is perfect for preparing images for web uploads or email.



---

## All Features

* **NEW! Compress to Target File Size:** Compress JPGs (using `jpegoptim`) or PNGs (using `convert`) to an approximate target size in KB or MB.
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
