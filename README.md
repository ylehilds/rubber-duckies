# 🦆 Rubber Duckies (ATTiny85 Project)

This project uses an **ATTiny85 development board (Digispark)** to create simple “rubber ducky”-style USB devices programmed through the **Arduino IDE**.

👉 Example hardware: https://amzn.to/4t0SuWn

---

## ⚠️ Disclaimer

You are free to modify the code for your own projects. However:

- This repository is intended **strictly for educational purposes**
- The included code is designed to **avoid malicious or illegal use**
- Use only on your **own offline, personal computer**

These instructions were tested on a **Windows machine** for installing libraries and board support.

---

## 🛠️ Setup Instructions

### 1. Install Arduino IDE

Download the Arduino IDE from the official website:  
👉 https://www.arduino.cc/en/software

- Select: **Windows 10 or newer (64-bit)**

---

### 2. Add Digispark Board Support

#### Add Board Manager URL
1. Open **Arduino IDE**
2. Go to:  
   `File → Preferences`
3. In **“Additional Board Manager URLs”**, add:

http://digistump.com/package_digistump_index.json

#### Install Digistump Boards
1. Go to:  
   `Tools → Board → Boards Manager`
2. Search for: **digistump**
3. Install: **Digistump AVR Boards**

#### Select the Board
1. Go to:  
   `Tools → Board`
2. Select:  
   👉 **Digispark (Default - 16.5 MHz)**

---

## ⚠️ Driver Installation Issues (Windows)

If you encounter errors installing **"Digistump LLC usbser"**, this is a common issue on Windows 10/11.

### ❗ What’s Happening

During setup, Arduino attempts to install the Digistump USB driver. Windows may block it because:

- The driver is **unsigned or outdated**
- There is a **conflicting USB driver already installed**
- Windows security blocks **legacy driver installations**

---

### 🔧 Fix: Install the Driver Manually (Recommended)

Follow these steps to ensure reliable uploads:

#### 1. Plug in your Digispark
- Insert the device into your USB port
- Wait ~5 seconds

---

#### 2. Open Device Manager
Look for one of the following:
- **Unknown Device**
- **Digispark**
- **USB Device**

---

#### 3. Install the Driver
1. Right-click the device → **Update driver**
2. Select: **Browse my computer for drivers**
3. Navigate to your Arduino directory, typically:

C:\Users<YourUser>\AppData\Local\Arduino15\packages\digistump\drivers

*(or wherever Digistump drivers are installed)*
4. Select the folder and continue

---

### 💡 Tips

- If installation fails, try running Device Manager as **Administrator**
- You may need to temporarily disable **driver signature enforcement** on some systems
- After successful installation, you should no longer see the device as “Unknown”

---

## 💻 Uploading Your Code

### 1. Load Your Sketch
- Copy your desired code
- Paste it into the Arduino IDE, replacing any existing content

### 2. Verify the Code
- Click **“Verify”** (✔️)
- Wait for the status message in the bottom-right corner
- This step checks for errors and compiles your code

---

### 3. Upload to ATTiny85

⚠️ **Important:** Do NOT plug in the board yet

1. Click **“Upload”** (➡️)
2. Wait for the prompt:
> Plug in device now... (you have ~60 seconds)
3. Plug in your ATTiny85 board
4. Wait ~10 seconds

✅ If you see:

micronucleus done

Your upload was successful!

---

## ⚙️ How It Works

Once programmed:

- The ATTiny85 briefly appears as a **USB device (~5 seconds)**
- It then executes the uploaded code automatically

---

## 🎉 You're Done!

Your rubber ducky device is now ready to use.
