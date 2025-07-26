#include <iostream>
#include <string>

class HotelRoom {
private:
    int roomNumber;
    std::string roomType;
    bool isOccupied;

public:
    HotelRoom(int roomNumber, std::string roomType) {
        this->roomNumber = roomNumber;
        this->roomType = roomType;
        this->isOccupied = false;
    }

    void displayDetails() {
        std::cout << "Room Number: " << roomNumber << std::endl;
        std::cout << "Room Type: " << roomType << std::endl;
        if (isOccupied) {
            std::cout << "Occupied" << std::endl;
        } else {
            std::cout << "Available" << std::endl;
        }
    }

    void bookRoom() {
        if (!isOccupied) {
            isOccupied = true;
            std::cout << "Room booked successfully" << std::endl;
        } else {
            std::cout << "Room is already occupied" << std::endl;
        }
 }

    void cancelBooking() {
        if (isOccupied) {
            isOccupied = false;
            std::cout << "Booking cancelled successfully" << std::endl;
        } else {
            std::cout << "Room is already available" << std::endl;
        }
    }
};

int main() {
    HotelRoom room(101, "Deluxe");
    room.displayDetails();
    room.bookRoom();
    room.displayDetails();
    room.cancelBooking();
    room.displayDetails();
    return 0;
}
