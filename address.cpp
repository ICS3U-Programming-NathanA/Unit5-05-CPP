// Copyright (c) 2022 Nathan Araujo All rights reserved.
// .
// Created by: Nathan Araujo
// Date : Dec 5, 2022
// This program formats the users address

#include <algorithm>
#include <iostream>

std::string addressFormat(std::string fullName, std::string
streetNum, std::string, std::string streetName, std::string city, std::string
province, std::string postalCode,   std::string apartment = "") {
    std::string address;
    // If the user entered "y" for apartment
    if (apartment != "") {
        address = fullName + "\n" + apartment + "-" + streetNum + " "
        + streetName + "\n" + city + " " + province + " " + postalCode + "\n";
        // Otherwise set the address without the apartment number
    } else {
        address = fullName + "\n" + streetNum + " " + streetName + "\n" + city
        + " " + province + " " + postalCode + "\n";
    }
    return address;
}

int main() {
    // Declaring variables
    std::string userFullName, userApartmentQuestion, userApartment,
        userStreetNum, userStreetName, userCity,
        userProvince, userPostalCode, address;

    // Gets userFullName from the user
    std::cout << "\nEnter your full name: ";
    std::getline(std::cin, userFullName);

    // Ask the user of they live in an apartment
    std::cout << "\nDo you have live in an apartment?(y or n): ";
    std::getline(std::cin, userApartmentQuestion);
    std::transform(userApartmentQuestion.begin(), userApartmentQuestion.end(),
                   userApartmentQuestion.begin(), ::toupper);

    // If they do then tell them to enter their apartment number
    if (userApartmentQuestion == "Y") {
        std::cout << "\nEnter your apartment number: ";
        std::getline(std::cin, userApartment);
    }
    // Gets userStreetNum from the user
    std::cout << "\nEnter your street number: ";
    std::cin >> userStreetNum;
    std::getline(std::cin, userStreetName);

    // Gets userStreetName from the user
    std::cout << "\nEnter your street name and type of: ";
    std::getline(std::cin, userStreetName);

    // Gets userCity from the user
    std::cout << "\nEnter your city: ";
    std::getline(std::cin, userCity);

    // Gets userProvince from the user
    std::cout << "\nEnter your province (As an abbreviation): ";
    std::getline(std::cin, userProvince);

    // Gets userPostalCode from the user
    std::cout << "\nEnter your Postal Code: ";
    std::getline(std::cin, userPostalCode);

    // sets userFullName to all uppercase
    std::transform(userFullName.begin(), userFullName.end(),
                   userFullName.begin(), ::toupper);
    // sets userApartment to all uppercase
    std::transform(userApartment.begin(), userApartment.end(),
                   userApartment.begin(), ::toupper);
    // sets userStreetName to all uppercase
    std::transform(userStreetName.begin(), userStreetName.end(),
                   userStreetName.begin(), ::toupper);
    // sets userCity to all uppercase
    std::transform(userCity.begin(), userCity.end(),
                   userCity.begin(), ::toupper);
    // sets userProvince to all uppercase
    std::transform(userProvince.begin(), userProvince.end(),
                   userProvince.begin(), ::toupper);
    // sets userPostalCode to all uppercase
    std::transform(userPostalCode.begin(), userPostalCode.end(),
                   userPostalCode.begin(), ::toupper);

    // call addressFormat
    address = addressFormat(userFullName, userStreetName, userFullName
    , userCity, userProvince, userPostalCode, userApartment);

    // print the address
    std::cout << "Your Canadian mailing address is\n";
    std::cout << address << "\n";
}
