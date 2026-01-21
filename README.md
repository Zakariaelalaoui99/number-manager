# Number Manager (Qt C++)

A dynamic Qt-based GUI application designed to manage numerical data. This project demonstrates the use of the **Singleton Pattern** for data persistence and **Signals and Slots** for real-time UI synchronization.

## 🚀 Features

* **Dynamic Data Management**: Add, Edit, and Delete numbers from a centralized list.
* **Real-time Calculations**: Automatically computes the **Sum**, **Product**, and **Average** of the list items as they change.
* **Custom Dialogs**:
    * **Input Dialog**: Standardized input for adding and modifying values.
    * **Special Function Dialog**: Generates complex sequences like **Natural Numbers** or **Factorials** based on user input $n$.
* **Dynamic UI Logic**: Buttons (Edit/Delete) are context-aware and only enable when a valid selection is made.
* **Safety Features**: Confirmation dialogs for data deletion and clearing the entire list.
 
## 🛠️ Technical Implementation

### Design Patterns
* **Singleton Pattern**: The `NumbersList` class is implemented as a Singleton to ensure a single source of truth for data across different dialogs and the main window.
* **Observer Pattern (Signals/Slots)**: The core logic uses `emit listChanged()` to trigger UI updates (`pdateUI()`), ensuring the interface is always in sync with the underlying data.

### Input Validation
* Uses `QDoubleValidator` and `text().toInt()` logic to ensure user inputs are mathematically valid before processing.
* The Special Function dialog utilizes dynamic validation to disable the "OK" button until requirements ($n > 0$) are met.

## 📂 Project Structure

* `NumbersList`: The logic layer (Singleton) handling the data array.
* `MainWindow`: The primary UI controller managing the list view and math displays.
* `AddNumberDialog`: A reusable dialog component for data entry and editing.
* `SpecialFunctionDialog`: A custom form for generating algorithmic sequences.

## ⚙️ How to Run

1.  Clone the repository:
    ```bash
    git clone [https://github.com/Zakariaelalaoui99/number-manager.git](https://github.com/Zakariaelalaoui99/number-manager.git)
    ```
2.  Open `NumberManager.pro` in **Qt Creator**.
3.  Run `qmake` and build the project.
4.  Click the **Run** button (green arrow).


